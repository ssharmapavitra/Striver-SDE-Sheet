vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*> q1;
        q1.push(root);
        while(!q1.empty()){
            int count=q1.size();
            vector<int> v1;
            while(count--){
                TreeNode* temp=q1.front();
                q1.pop();
                v1.push_back(temp->val);
                if(temp->left!=NULL)
                    q1.push(temp->left);
                if(temp->right!=NULL)
                    q1.push(temp->right);
            }
            ans.push_back(v1);
        }
        return ans;
    }