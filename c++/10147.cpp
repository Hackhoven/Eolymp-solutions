TreeNode* Prev(TreeNode *tree)
{
    if (tree == NULL) 
        return NULL;
    
    if (tree->left != NULL) 
    {
        TreeNode *node = tree->left;
        while (node->right != NULL) 
            node = node->right;

        return node;
    } 
    else 
    {
        TreeNode *parent = tree->parent;
        TreeNode *node = tree;

        while (parent != NULL && node == parent->left) 
        {
            node = parent;
            parent = parent->parent;
        }
        
        return parent;
    }
}