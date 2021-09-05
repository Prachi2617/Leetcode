class Solution {
public:
    int minDepth(TreeNode* root)
    {
        int l=0, r=0;
        if(root==NULL)
            return 0;
        if(root->left)
        l=minDepth(root->left);
        if(root->right)
        r=minDepth(root->right);
        if(l==0 || r==0 )
            return max(l,r)+1;
        else
            return min(l,r)+1;
    }
};
