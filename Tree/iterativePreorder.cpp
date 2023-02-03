class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        if (root == NULL)
            return ans;
        stack<TreeNode *> s1;
        s1.push(root);
        while (!s1.empty())
        {
            TreeNode *temp = s1.top();
            s1.pop();
            ans.push_back(temp->val);
            if (temp->right != NULL)
                s1.push(temp->right);
            if (temp->left != NULL)
                s1.push(temp->left);
        }
        return ans;
    }
};