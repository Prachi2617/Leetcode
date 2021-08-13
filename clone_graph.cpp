/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    void dfs(Node *copy, Node *node, vector<Node *>&vis)
    {
        vis[copy->val]=copy;
        for(auto i:node->neighbors)
        {
            if(vis[i->val])
            {
                (copy->neighbors).push_back(vis[i->val]);
            }
            else
            {
                Node *newnode=new Node(i->val);
                (copy->neighbors).push_back(newnode);
                dfs(newnode,i,vis);
            }
        }
    }
    Node* cloneGraph(Node* node)
    {
        vector<Node *>vis(1000,NULL);
        if(!node)
            return NULL;
        Node *copy= new Node(node->val);
        dfs(copy,node,vis);
        return copy;
    }
};
