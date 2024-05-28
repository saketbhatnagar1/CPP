#include <iostream>

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data) : data(data), left(nullptr), right(nullptr) {}
};

class BinaryTree {
private:
    TreeNode* root;
    
    void inorderTraversal(TreeNode* node) {
        if (node == nullptr) return;
        inorderTraversal(node->left);
        std::cout << node->data << " ";
        inorderTraversal(node->right);
    }

    void preorderTraversal(TreeNode* node) {
        if (node == nullptr) return;
        std::cout << node->data << " ";
        preorderTraversal(node->left);
        preorderTraversal(node->right);
    }

    void postorderTraversal(TreeNode* node) {
        if (node == nullptr) return;
        postorderTraversal(node->left);
        postorderTraversal(node->right);
        std::cout << node->data << " ";
    }

public:
    BinaryTree() : root(nullptr) {}

    void insert(int data) {
        TreeNode* newNode = new TreeNode(data);
        if (root == nullptr) {
            root = newNode;
        } else {
            TreeNode* current = root;
            TreeNode* parent = nullptr;
            while (true) {
                parent = current;
                if (data < current->data) {
                    current = current->left;
                    if (current == nullptr) {
                        parent->left = newNode;
                        break;
                    }
                } else {
                    current = current->right;
                    if (current == nullptr) {
                        parent->right = newNode;
                        break;
                    }
                }
            }
        }
    }

    void displayInOrder() {
        inorderTraversal(root);
        std::cout << std::endl;
    }

    void displayPreOrder() {
        preorderTraversal(root);
        std::cout << std::endl;
    }

    void displayPostOrder() {
        postorderTraversal(root);
        std::cout << std::endl;
    }
};

int main() {
    BinaryTree tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    std::cout << "Inorder traversal: ";
    tree.displayInOrder(); // Output: 20 30 40 50 60 70 80

    std::cout << "Preorder traversal: ";
    tree.displayPreOrder(); // Output: 50 30 20 40 70 60 80

    std::cout << "Postorder traversal: ";
    tree.displayPostOrder(); // Output: 20 40 30 60 80 70 50

    return 0;
}
