#include <iostream>

using namespace std;

// Define the structure of a binary tree node
class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    
    // Constructor
    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Define the binary tree class
class BinaryTree {
private:
    TreeNode* root;

public:
    // Constructor
    BinaryTree() : root(nullptr) {}

    // Function to insert a node into the binary tree
    void insert(int value) {
        root = insertNode(root, value);
    }

    // Function to recursively insert a node into the binary tree
    TreeNode* insertNode(TreeNode* node, int value) {
        if (node == nullptr) {
            return new TreeNode(value);
        }

        if (value < node->data) {
            node->left = insertNode(node->left, value);
        } else {
            node->right = insertNode(node->right, value);
        }

        return node;
    }

    // Function to perform pre-order traversal of the binary tree
    void preOrderTraversal(TreeNode* node) {
        if (node == nullptr) return;
        
        // Print current node
        cout << node->data << " ";
        
        // Traverse left subtree
        preOrderTraversal(node->left);
        
        // Traverse right subtree
        preOrderTraversal(node->right);
    }

    // Function to perform pre-order traversal of the binary tree (wrapper function)
    void preOrderTraversal() {
        preOrderTraversal(root);
    }
};

int main() {
    // Create a binary tree object
    BinaryTree tree;

    // Insert elements into the binary tree
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(2);
    tree.insert(4);
    tree.insert(6);
    tree.insert(8);

    // Perform pre-order traversal to print the elements of the tree
    cout << "Pre-order traversal of the binary tree: ";
    tree.preOrderTraversal();
    cout << endl;

    return 0;
}
