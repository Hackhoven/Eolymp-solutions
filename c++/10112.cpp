int getHeight(TreeNode* node) 
{
    if (!node) 
        return 0;
    return max(getHeight(node->left), getHeight(node->right)) + 1;
}

bool isBalancedHelper(TreeNode* node) 
{
    if (!node) 
        return true;

    int leftHeight = getHeight(node->left);
    int rightHeight = getHeight(node->right);
    
    if (abs(leftHeight - rightHeight) > 1) 
        return false;
    
    return isBalancedHelper(node->left) && isBalancedHelper(node->right);
}

bool isBalanced(TreeNode* root) {
    return isBalancedHelper(root);
}