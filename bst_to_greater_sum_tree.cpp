class Solution {
public:
  //  int x=0;
    void solve(TreeNode *root,int &sum)
    {
        if(!root)
            return ;
         solve(root->right,sum);
         root->val=sum+root->val;
        sum=root->val;
         solve(root->left,sum);

        //return root->data;

    }
    TreeNode* bstToGst(TreeNode* root)
    {
        //TreeNode *temp;
        int sum=0;
        solve(root, sum);
        return root;
    }
};
