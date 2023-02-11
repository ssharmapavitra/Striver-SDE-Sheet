/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;
        queue<TreeNode *> q;
        bool lr = true;
        q.push(root);
        while (!q.empty())
        {
            int cnt = q.size();
            vector<int> tp(cnt);
            for (int i = 0; i < cnt; i++)
            {
                TreeNode *node = q.front();
                q.pop();

                int pos = (lr ? i : cnt - i - 1);
                tp[pos] = node->val;
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            lr = !lr;
            ans.push_back(tp);
        }
        return ans;
    }
};