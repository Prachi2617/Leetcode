class Solution {
public:
    void rec_postorder(TreeNode* root,vector<int>&ans)
    {
        if(root==NULL)
            return;
        rec_postorder(root->left,ans);
        rec_postorder(root->right,ans);
        ans.push_back(root->val);
    }

    void it_postorder(TreeNode *root, vector<int>&ans)
    {
        if(root==NULL)
            return ;
        stack<TreeNode *>st;
        stack<int>out;
        st.push(root);
        while(!st.empty())
        {
            TreeNode *curr=st.top();
            st.pop();
            out.push(curr->val);
            if(curr->left)
                st.push(curr->left);
            if(curr->right)
                st.push(curr->right);
        }
        while(!out.empty())
        {
            ans.push_back(out.top());
            out.pop();
        }
    }

    vector<int> postorderTraversal(TreeNode* root)
    {
        vector<int>ans;
       // rec_postorder(root,ans);
        it_postorder(root,ans);
        return ans;
    }
};
