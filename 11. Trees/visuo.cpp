#include <iostream>
#include <queue>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Function to create a new node
Node* createNode(int value) {
    return new Node(value);
}

// Function to print the binary tree with proper indentation
void printTree(Node* root, int indent = 0) {
    if (root == nullptr) return;

    // Increase indentation for the right child
    printTree(root->right, indent + 4);

    // Print current node with proper indentation
    cout << string(indent, ' ') << root->data << endl;

    // Decrease indentation for the left child
    printTree(root->left, indent + 4);
}

int main() {
    // Create the binary tree
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    // Print the binary tree
    cout << "Binary Tree Visualization:" << endl;
    printTree(root);

    return 0;
}
