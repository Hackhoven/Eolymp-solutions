TreeNode* Next(TreeNode *tree) 
{
    if (tree->right != NULL) 
    {
        TreeNode *node = tree->right;

        while (node->left != NULL) 
            node = node->left;

        return node;
    } 
    else 
    {
        TreeNode *parent = tree->parent;
        TreeNode *node = tree;
        
        while (parent != NULL && node == parent->right)
        {
            node = parent;
            parent = parent->parent;
        }

        return parent;
    }
}