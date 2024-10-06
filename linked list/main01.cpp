#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node* create(int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}
void insert(Node *&head, int value)
{
    Node *newNode = create(value);
    newNode->next = head;
    head = newNode;
}
Node* deleteNode(Node *&head){
    if(head ==nullptr){
        return nullptr;
    }
    Node* temp = head;
    head= head->next;
    delete temp;
    return head;

}
void display(Node* head){
    if(head == nullptr){
        cout<<"List is empty";
        return;
    }
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp = temp->next;
    }

}
int main()
{
    Node* head = nullptr;
    insert(head,8);
    insert(head,7);
    insert(head,6);
    insert(head,5);
    insert(head,4);
    insert(head,3);
    insert(head,2);
    insert(head,1);
    display(head);
    // deleteNode(head);
    // deleteNode(head);
    // cout<<endl;
    // display(head);
    
}