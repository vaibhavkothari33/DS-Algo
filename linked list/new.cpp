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
void insert(Node *&head, int value)
{
    Node *newNode = create(value);
    newNode->next = head;
    head = newNode;
}
// void insertend(Node *&head, int value)
// {
//     Node *newNode = create(value);
//     if (head == nullptr)
//     {
//         head = newNode;
//         return;
//     }
//     Node *temp = head;
//     while (temp->next != nullptr)
//     {
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }
// void deleteAtStart(Node *&head, int key)
// {
//     if (head == nullptr)
//     {
//         return;
//     }
//     if (head->data == key)
//     {
//         Node *temp = head;
//         head = head->next;
//         delete temp;
//         return;
//     }
//     Node *temp = head;
//     while (temp->next != nullptr && temp->next->data != key)
//     {
//         temp = temp->next;
//     }
//     if (temp->next == nullptr)
//     {
//         return;
//     }
//     Node *nodeToDelete = temp->next; 
//     temp->next = nodeToDelete->next;
//     delete nodeToDelete;
// }
void display(Node *head)
{
    Node *temp = head;
    if (head == nullptr)
    {
        cout << "List is empty";
        return;
    }
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
    // insertend(head, 600);
    // display(head);
    // cout << endl;
    // insertend(head, 500);
    // display(head);
    // cout << endl;
    // insertend(head, 400);
    // display(head);
    // cout << endl;
    // insertend(head, 300);
    // display(head);
    // cout << endl;
    // insertend(head, 200);
    // display(head);
    // cout << endl;
    // insertend(head, 100);
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
    // deleteAtStart(head,200);
    // display(head);
    // deleteAtStart(head,100);
    // display(head);
    // deleteAtStart(head,300);
    // display(head);
   
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
