class Solution
{
public:
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        stack<TreeNode *> s1;
        stack<int> s2;
        if (root == NULL)
            return ans;
        s1.push(root);
        while (!s1.empty())
        {
            TreeNode *temp = s1.top();
            s2.push(temp->val);
            s1.pop();
            if (temp->left != NULL)
                s1.push(temp->left);
            if (temp->right != NULL)
                s1.push(temp->right);
        }
        while (!s2.empty())
        {
            ans.push_back(s2.top());
            s2.pop();
        }
        return ans;
    }
};