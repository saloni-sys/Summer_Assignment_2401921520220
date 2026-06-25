
class Solution {
public:
    int diameter = 0;

    int height(TreeNode* root) {
        if (root == NULL)
            return 0;

        return 1 + max(height(root->left), height(root->right));
    }

    void findDiameter(TreeNode* root) {
        if (root == NULL)
            return;

        int lh = height(root->left);
        int rh = height(root->right);

        diameter = max(diameter, lh + rh);

        findDiameter(root->left);
        findDiameter(root->right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        findDiameter(root);
        return diameter;
    }
};
