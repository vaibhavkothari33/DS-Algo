// #include<iostream>
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
// Node* insert(Node* root, int value){
    
// }
// int main(){

// }

#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left = right = nullptr;
    }
};

Node* buildTree(Node* root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root = new Node(data); 

    if(data == -1){
        return nullptr;
    }
    cout<<"Enter the data for the left "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data for the left "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

int main(){
    Node* root = nullptr;

    root = buildTree(root);

    return 0;
}