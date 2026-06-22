class Solution {
public:
    TreeNode* invertTree(TreeNode* node) {
        if(node == NULL)
        return NULL;

    swap(node->left, node->right);

    invertTree(node->left);
    invertTree(node->right);

    return node;

    }
};
