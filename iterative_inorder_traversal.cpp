class Solution {
public:
    void rec_inorder(TreeNode *root, vector<int>&ans)
    {
        if(root==NULL)
            return ;
        rec_inorder(root->left,ans);
        ans.push_back(root->val);
        rec_inorder(root->right,ans);
    }
    void it_inorder(TreeNode *root, vector<int>&ans)
    {
        if(root==NULL)
            return ;
        stack<TreeNode *>st;
        TreeNode *curr=root;
        while(!st.empty() || curr!=NULL)
        {
            if(curr!=NULL)
            {
                st.push(curr);
                curr=curr->left;
            }
            else
            {
                curr=st.top();
                st.pop();
                ans.push_back(curr->val);
                curr=curr->right;
            }
        }
    }
    vector<int> inorderTraversal(TreeNode* root)
    {
        vector<int>ans;
       // rec_inorder(root,ans);
        it_inorder(root,ans);
        return ans;
    }
};
