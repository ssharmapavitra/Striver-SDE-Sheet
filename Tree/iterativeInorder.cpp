class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        stack<TreeNode *> s1;
        TreeNode *node = root;
        while (1)
        {
            if (node != NULL)
            {
                s1.push(node);
                node = node->left;
            }
            else
            {
                if (s1.empty())
                    break;
                node = s1.top();
                s1.pop();
                ans.push_back(node->val);
                node = node->right;
            }
        }
        return ans;
    }
};