// #include <iostream>
// using namespace std;

// // Define the structure of a tree node
// struct Node {
//     int data;
//     Node* left;
//     Node* right;
    
//     Node(int value) {
//         data = value;
//         left = right = nullptr;
//     }
// };

// // Preorder Traversal (Root - Left - Right)
// void preorderTraversal(Node* node) {
//     if (node == nullptr) return;
//     cout << node->data << " ";        // Visit root
//     preorderTraversal(node->left);    // Traverse left subtree
//     preorderTraversal(node->right);   // Traverse right subtree
// }

// // Inorder Traversal (Left - Root - Right)
// void inorderTraversal(Node* node) {
//     if (node == nullptr) return;
//     inorderTraversal(node->left);     // Traverse left subtree
//     cout << node->data << " ";        // Visit root
//     inorderTraversal(node->right);    // Traverse right subtree
// }

// // Postorder Traversal (Left - Right - Root)
// void postorderTraversal(Node* node) {
//     if (node == nullptr) return;
//     postorderTraversal(node->left);   // Traverse left subtree
//     postorderTraversal(node->right);  // Traverse right subtree
//     cout << node->data << " ";        // Visit root
// }

// // Main function to test the traversals
// int main() {
//     // Construct the binary tree
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     cout << "Preorder Traversal: ";
//     preorderTraversal(root);
//     cout << endl;

//     cout << "Inorder Traversal: ";
//     inorderTraversal(root);
//     cout << endl;

//     cout << "Postorder Traversal: ";
//     postorderTraversal(root);
//     cout << endl;

//     return 0;
// }
#include <iostream>
using namespace std;

// Define a BST node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

// Function to insert a new value into the BST
Node* insert(Node* root, int value) {
    // If the tree is empty, create a new node and return it
    if (root == nullptr) {
        return new Node(value);
    }

    // Traverse to the correct position and insert the value
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

// Inorder traversal of BST (Left - Root - Right)
void inorderTraversal(Node* root) {
    if (root == nullptr) return;

    inorderTraversal(root->left);    // Traverse left subtree
    cout << root->data << " ";       // Visit root
    inorderTraversal(root->right);   // Traverse right subtree
}

// Main function to demonstrate insertion in BST
int main() {
    Node* root = nullptr;
    int n;

    // Take the number of elements to insert from the user
    cout << "Enter the number of elements to insert in the BST: ";
    cin >> n;

    // Take the elements as input from the user
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        root = insert(root, value);
    }

    // Print the BST using inorder traversal
    cout << "\nInorder Traversal of BST: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
