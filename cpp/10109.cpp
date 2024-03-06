int minDepth(TreeNode* tree) 
{
    if (tree == NULL) 
        return 0;

    if (tree->left == NULL && tree->right == NULL) 
        return 1;

    if (tree->left == NULL) 
        return minDepth(tree->right) + 1;

    if (tree->right == NULL) 
        return minDepth(tree->left) + 1;

    else
        return min(minDepth(tree->left), minDepth(tree->right)) + 1;
}