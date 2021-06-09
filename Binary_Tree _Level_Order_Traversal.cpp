// this is not according to leetcode it doesn't return answer in vector of vector form it'll keep printing tree in level order traversal

void levelOrder(TreeNode* root)
    {
     
        if(root==NULL)
            return ;
        queue<TreeNode *>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode *n =q.front();
            cout<<n.val<<"\t";
            q.pop();
            level.push_back(n->val);
            if(n->left)
                temp.push(n->left);
            if(n->right)
                temp.push(n->right);
        }
        return ans;
    }




// This is according to leetcode as we have to return vector of vector so we are using two queues otherwise we can do this with just one queue
//Here two queue's are used one is to store the current node while other is to store the child of current node
//vector is used to store all the nodes->vel from that level and when the 1st queue is empty then copy all the nodes to the answer
//and when 1st queue is empty swap it with the other queue , this is to now process the child of the curr node


class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root)
    {
        vector<vector<int>>ans;
        if(root==NULL)
            return ans;
        queue<TreeNode *>q;
        queue<TreeNode *>temp;
        vector<int>level;
        q.push(root);
        while(!q.empty())
        {
            TreeNode *n =q.front();
            q.pop();
            level.push_back(n->val);
            if(n->left)
                temp.push(n->left);
            if(n->right)
                temp.push(n->right);
            if(q.empty())
            {
                q.swap(temp);
                ans.push_back(level);
                level.clear();
            }
        }
        return ans;
    }
};
