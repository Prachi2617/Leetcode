class Solution {
public:
    void rec_preorder(TreeNode *root, vector<int>&ans)
    {
        if(root==NULL)
            return;
        ans.push_back(root->val);
        rec_preorder(root->left,ans);
        rec_preorder(root->right,ans);
    }

    void it_preorder(TreeNode *root, vector<int>&ans)
    {
        if(root==NULL)
            return ;
        stack<TreeNode *>st;
        st.push(root);
        while(!st.empty())
        {
            TreeNode *curr=st.top();
            st.pop();
            ans.push_back(curr->val);
            if(curr->right)
                st.push(curr->right);
            if(curr->left)
                st.push(curr->left);
        }
    }

    vector<int> preorderTraversal(TreeNode* root)
    {
        vector<int>ans;
        //rec_preorder(root,ans);
        it_preorder(root,ans);
        return ans;
    }
};
