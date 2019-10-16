

class Node:
    def __init__(self, data):
        self.data = data
        self.right = None
        self.left = None


class Traversal:
    def preorder(self, root:Node):
        if not root:
            return
        print(root.data)
        self.preorder(root.left)
        self.preorder(root.right)
    
    def inorder(self, root:Node):
        if not root:
            return 
        self.inorder(root.left)
        print(root.data)
        self.inorder(root.right)
    
    def postorder(self, root:Node):
        if not root:
            return
        self.postorder(root.left)
        self.postorder(root.right)
        print(root.data)



if __name__ == '__main__':

    """
    make some nodes to use as input
    """
    root = Node(10)
    root.left = Node(7)
    root.right = Node(11)
    root.left.left = Node(6)
    root.left.right = Node(8)

    """"
    instantiate the class
    """"
    t = Traversal()


    """
    use mehtods
    """
    print('preorder:')
    t.preorder(root)
    print()

    print('inorder:')
    t.inorder(root)
    print()

    print('postorder:')
    t.postorder(root)
    print()

    

