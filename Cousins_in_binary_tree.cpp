class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y)
    {
        if(root==NULL)
            return false;
        queue<TreeNode *>q;
        TreeNode *p1;
        TreeNode *p2;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            int fl1=0,fl2=0;

            for(int i=0;i<n;i++)
            {
                TreeNode *curr=q.front();
                    q.pop();
                if(curr->left )
                {
                    q.push(curr->left);
                    if(curr->left->val==x )
                    {
                        fl1=1;
                        p1=curr;
                    }
                    if( curr->left->val==y)
                    {
                        fl2=1;
                        p2=curr;
                    }
                }
                if(curr->right)
                {
                    q.push(curr->right);
                     if(curr->right->val==x )
                    {
                        fl1=1;
                        p1=curr;
                    }
                    if( curr->right->val==y)
                    {
                        fl2=1;
                        p2=curr;
                    }
                }
            }
            if(p1!=p2 && fl1==1 && fl2==1)
                return true;
        }
        return false;
    }
};
