TreeNode* Find(TreeNode* tree, int element) 
{
    if (tree == NULL) 
        return NULL;

    if (tree->val == element) 
        return tree;
    
    // If the target value is bigger than the node's value, searching in the right subtree
    if (tree->val < element) 
        return Find(tree->right, element);

    // else searching in the left subtree
    else 
        return Find(tree->left, element);
}