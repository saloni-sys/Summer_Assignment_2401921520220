class Solution:
    def maxPathSum(self, root: Optional[TreeNode]) -> int:
        self.maxi = float('-inf')

        def maxPath(node):
            if node is None:
                return 0

            leftSum  = max(maxPath(node.left), 0)
            rightSum = max(maxPath(node.right), 0)

            self.maxi = max(self.maxi, leftSum + rightSum + node.val)

            return node.val + max(leftSum, rightSum)

        maxPath(root)
        return self.maxi
