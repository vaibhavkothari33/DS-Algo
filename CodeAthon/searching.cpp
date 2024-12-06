#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int value)
    {
        data = value;
        left = right = nullptr;
    }
};

// pre order -->  root ,left , right
void preOrder(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
// in order --> left, root , right
void inorder(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postOrder(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
node *createTree()
{
    int data;
    cout << "Enter the data: ";
    cin >> data;

    if (data == -1)
        return nullptr;
    node *vaibhav = new node(data);
    cout << "Enter the left child: " << data << endl;
    vaibhav->left = createTree();

    cout << "Enter the right child: " << data << endl;
    vaibhav->right = createTree();
    return vaibhav;
}
bool search(node *root, int key)
{
    if (root == nullptr)
        return false;

    if (root->data == key)
        return true;

    if (key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}
int height(node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    int leftheight = height(root->left);
    int rightheight = height(root->right);
    return max(leftheight, rightheight);
}
void printLevel(node *root, int level)
{
    if (root == nullptr)
    {
        return;
    }
    if (level == 1)
    {
        cout << root->data << " ";
    }
    else if (level > 1)
    {
        printLevel(root->left, level - 1);
        printLevel(root->right, level - 1);
    }
}
void levelorderPrint(node *root)
{
    int h = height(root);
    for (int i = 0; i < h; i++)
    {
        printLevel(root, i);
    }
}
int main()
{
    node *root = createTree();
    int key = 7;
    if (search(root, key))
    {
        cout << key << " found in BST." << endl;
    }

    // node *root = new node(1);
    // root->left = new node(2);
    // root->right = new node(3);
    // root->left->left = new node(4);
    // root->left->right = new node(5);
    // Tree structure:
    //       1

    //     2   3

    //   4   5
    cout << "Tree created successfully!" << endl;
    cout << "PreOrder tranversal" << endl;
    preOrder(root);
    cout << endl;
    cout << "Inorder tranversal" << endl;
    inorder(root);
    cout << endl;
    cout << "PostOrder tranversal" << endl;
    postOrder(root);
    cout << endl;
    levelorderPrint(root);
}