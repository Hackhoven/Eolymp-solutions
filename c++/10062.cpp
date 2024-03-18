TreeNode* Maximum(TreeNode *tree) 
{
    if (tree == NULL)
        return NULL;

    while (tree->right != NULL)
        tree = tree->right;

    return tree;
}