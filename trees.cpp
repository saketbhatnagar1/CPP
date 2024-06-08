#include <iostream>
using namespace std;

// Definition of a tree node
struct TreeNode {
    int value; // Value stored in the node
    TreeNode* left; // Pointer to the left child
    TreeNode* right; // Pointer to the right child

    // Constructor to initialize a tree node
    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

// Function to insert a node in the binary tree
TreeNode* insert(TreeNode* root, int value) {
    // If the tree is empty, create a new node
    if (root == nullptr) {
        return new TreeNode(value);
    }

    // Recursively insert the value in the left or right subtree
    if (value < root->value) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }

    // Return the unchanged root node
    return root;
}

// In-order traversal (left, root, right)
void inOrderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    inOrderTraversal(root->left);
    cout << root->value << " ";
    inOrderTraversal(root->right);
}

// Pre-order traversal (root, left, right)
void preOrderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    cout << root->value << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

// Post-order traversal (left, right, root)
void postOrderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->value << " ";
}

int main() {
    TreeNode* root = nullptr;

    // Insert nodes into the tree
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    // Display the tree using different traversal methods
    cout << "In-order Traversal: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Pre-order Traversal: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "Post-order Traversal: ";
    postOrderTraversal(root);
    cout << endl;

    return 0;
}

/*
Explanation:
1. TreeNode struct: Defines a node in the binary tree with an integer value and pointers to left and right children. It has a constructor to initialize the node.
2. insert function: Recursively inserts a new value into the binary tree. It returns the root of the tree after insertion.
3. inOrderTraversal function: Performs an in-order traversal of the tree, printing node values in left-root-right order.
4. preOrderTraversal function: Performs a pre-order traversal of the tree, printing node values in root-left-right order.
5. postOrderTraversal function: Performs a post-order traversal of the tree, printing node values in left-right-root order.
6. main function: Demonstrates inserting nodes into the tree and performing different traversals to display the tree structure.
*/
