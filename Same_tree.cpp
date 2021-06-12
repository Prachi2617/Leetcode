// Just check if any one of them is NULL then p==q will return either true or false

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q)
    {

        if(p==NULL || q==NULL)
            return p==q;
        return
            (p->val==q->val && isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
    }
};
