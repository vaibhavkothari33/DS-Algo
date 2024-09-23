#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* create(int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}
// insering node in the starting  
void insert(Node*& head ,int value){
    Node* newNode = create(value);
    newNode->next = head;
    head = newNode;
}
void insertinend(){

}
void display(Node* head){
    if(head == nullptr){
        cout<<"List is empty";
        return ; 
    }
    Node* temp  = head;
    while(temp!= nullptr){
        cout<<temp->data<<"     ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
     Node* head = nullptr;
     insert(head,100);
     insert(head,200);
     insert(head,300);
     insert(head,400);
     insert(head,500);
     display(head);
     return 0;
}