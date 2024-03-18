bool isSymmetric(TreeNode *tree) 
{
    if (tree == NULL) 
        return true;
    
    return isSymmetric(tree->left, tree->right);
}

bool isSymmetric(TreeNode *leftSubtree, TreeNode *rightSubtree) 
{
    if (leftSubtree == NULL && rightSubtree == NULL) 
        return true;
    
    if (leftSubtree == NULL || rightSubtree == NULL) 
        return false;
    
    if (leftSubtree->val != rightSubtree->val) 
        return false;
    
    return isSymmetric(leftSubtree->left, rightSubtree->right) && isSymmetric(leftSubtree->right, rightSubtree->left);
}