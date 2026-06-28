class Codec:

    
    def serialize(self, root):
        if root is None:
            return "X"
        
        leftSerialize  = self.serialize(root.left)
        rightSerialize = self.serialize(root.right)
        
        return str(root.val) + "," + leftSerialize + "," + rightSerialize

    def deserialize(self, data):
        queue = deque(data.split(","))
        return self.deseriaize(queue)
    
    def deseriaize(self, q):
        if len(q) == 0:
            return None
        
        peek = q.popleft()
        
        if peek == "X":
            return None
        
        root       = TreeNode(int(peek))
        root.left  = self.deseriaize(q)
        root.right = self.deseriaize(q)
        
        return root
