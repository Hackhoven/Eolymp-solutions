TreeNode* Minimum(TreeNode* tree) 
{
    if (tree == NULL) 
        return NULL;

    TreeNode* current = tree;
    while (current->left != NULL) 
        current = current->left;  //go left

    return current;
}