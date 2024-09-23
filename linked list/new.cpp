// how to create a linked list
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *create(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}
// void insert(Node*& head,int value){
//     Node* newNode = create(value);
//     newNode->next = head;
//     head = newNode;
// }
void insert(Node *&head, int value)
{
    Node *newNode = create(value);
    newNode->next = head;
    head = newNode;
}
void insertend(Node *&head, int value)
{
    Node *newNode = create(value);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void display(Node *head)
{
    if (head == nullptr)
    {
        cout << "List is empty";
        return;
    }
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = nullptr;
    display(head);
    cout << endl;
    insertend(head, 600);
    display(head);
    cout << endl;
    insertend(head, 500);
    display(head);
    cout << endl;
    insertend(head, 400);
    display(head);
    cout << endl;
    insertend(head, 300);
    display(head);
    cout << endl;
    insertend(head, 200);
    display(head);
    cout << endl;
    insertend(head, 100);
    display(head);
    cout << endl;
    insert(head, 600);
    display(head);
    cout << endl;
    insert(head, 500);
    display(head);
    cout << endl;
    insert(head, 400);
    display(head);
    cout << endl;
    insert(head, 300);
    display(head);
    cout << endl;
    insert(head, 200);
    display(head);
    cout << endl;
    insert(head, 100);
    display(head);
    cout << endl;
}

// List is empty
// 600  

// 600  500  

// 600  500  400  

// 600  500  400  300  

// 600  500  400  300  200  

// 600  500  400  300  200  100  

// 600  600  500  400  300  200  100  

// 500  600  600  500  400  300  200  100  

// 400  500  600  600  500  400  300  200  100  

// 300  400  500  600  600  500  400  300  200  100  

// 200  300  400  500  600  600  500  400  300  200  100  

// 100  200  300  400  500  600  600  500  400  300  200  100  
