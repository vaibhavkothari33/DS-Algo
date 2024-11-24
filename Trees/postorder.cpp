// #include <iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node* left;
//     Node* right;

//     Node(int value){
//         data = value;
//         left = right = nullptr;
//     }
// };
// // preorder me tho root left and then right 
// void preorder(Node* node){
//     if (node == nullptr) return;
//     cout<<node->data<<" ";
//     preorder(node->left);
//     preorder(node->right);
// }

// int main()
// {
//     Node* root = new Node(1);
//     root-> left = new Node(2);
//     root-> right = new Node(3);
//     root-> left->left= new Node(6);

//     cout<<"Preorder "<<endl;
//     preorder(root);
//     cout<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left= right = nullptr;

    }
};
void preorder(Node* node){
    if(node == nullptr){
        return;
    }
    cout<<node->data<<endl;
    preorder(node->left);
    preorder(node->right);
}

void inorder(Node* node){
    if(node == nullptr) return;
    inorder(node->left);
    cout<<node->data<<endl;
    inorder(node->right);
}

Node* createTree(){
    int data;
    cout<<"Enter the data";
    cin>>data;

    if(data == -1) return nullptr;

    // Node* newNode = new Node(data);
    Node* newnode = new Node(data);
    cout<<"Enter the left child"<<data<<endl;
    newnode->left = createTree();

    cout<<"Enter the right child"<<data<<endl;
    newnode->right = createTree();

    return newnode;
}

int main(){
    Node* root = createTree();
    cout<<"Preorder traversal"<<endl;
    preorder(root);
    cout<<endl;

    cout<<"Inorder traversal"<<endl;
    inorder(root);
    cout<<endl;
    

}