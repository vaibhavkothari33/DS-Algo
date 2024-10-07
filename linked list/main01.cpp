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

Node* deleteNode(Node* head, int position){
  
    // previous of node to be deleted
    Node* prev;
    Node* temp = head;

    // Base case if linked list is empty
    if (temp == NULL)
        return head;

    // Case 1: Head is to be deleted
    if (position == 1) {
      
        // make next node as head and free old head
        head = temp->next;
        return head;
    }

    // Case 2: Node to be deleted is in middle
    // Traverse till given position
    for (int i = 1; i != position; i++) {
        prev = temp;
        temp = temp->next;
    }

    // If given position is found, delete node
    if (temp != NULL) {
        prev->next = temp->next;
        free(temp);
    }
    // If given position is not present
    else {
        cout << "Data not present\n";
    }

    return head;
}
// Node* deleteNode(Node *&head){
//     if(head ==nullptr){
//         return nullptr;
//     }
//     Node* temp = head;
//     head= head->next;
//     delete temp;
//     return head;
// }

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
    insert(head,3);
    insert(head,2);
    insert(head,1);
    display(head);
    // deleteNode(head);
    deleteNode(head,3);
    cout<<endl;
    display(head);
    
}