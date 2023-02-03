class Solution
{
public:
    bool isBalanced(TreeNode *root)
    {
        if (height(root) == -1)
            return false;
        else
            return true;
    }
    int height(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int l = height(root->left);
        if (l == -1)
            return -1;
        int r = height(root->right);
        if (r == -1)
            return -1;
        if (abs(l - r) > 1)
            return -1;
        return 1 + max(l, r);
    }
};