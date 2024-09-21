#include <iostream>
#include <stack>
using namespace std;


struct Node {
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printReverse(Node* head) {
    stack<int> s;
    Node* temp = head;
    while (temp != nullptr) {
        s.push(temp->data);
        temp = temp->next;
    }
    
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    push(&head, 10);
    push(&head, 20);
    push(&head, 30);
    push(&head, 40);

    cout << "Reverse traversal of linked list: ";
    printReverse(head);

    return 0;
}
