class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node)
    {
        if(node==NULL)
            return ;
        Node *temp=node->left;
        node->left=node->right;
        node->right=temp;
        if(node->left)
            mirror(node->left);
         if(node->right)
            mirror(node->right);

    }
};
