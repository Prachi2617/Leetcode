class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root)
    {
        vector<vector<int>>ans;
          if(!root)
    return ans;
        vector<int>temp;
        stack<TreeNode *>st1;
        stack<TreeNode *>st2;
        st1.push(root);
        while(!st1.empty() || !st2.empty())
        {
            while(!st1.empty())
            {
                TreeNode *curr=st1.top();
                st1.pop();
                temp.push_back(curr->val);
                if(curr->left)
                    st2.push(curr->left);
                if(curr->right)
                    st2.push(curr->right);
            }
            if(!temp.empty())
            ans.push_back(temp);
            temp.clear();
            while(!st2.empty())
            {
                TreeNode *curr2=st2.top();
                st2.pop();
                temp.push_back(curr2->val);

                if(curr2->right)
                    st1.push(curr2->right);
                if(curr2->left)
                    st1.push(curr2->left);
            }
            if(!temp.empty())
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};
