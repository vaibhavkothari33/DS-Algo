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
    node* vaibhav = new node(data);
    cout<<"Enter the left child: "<<data<<endl;
    vaibhav->left = createTree();

    cout<<"Enter the right child: "<<data<<endl;
    vaibhav->right = createTree();
    return vaibhav;

}
int main()
{
    node* root = createTree();
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
}