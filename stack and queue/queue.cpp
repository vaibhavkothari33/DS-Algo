// // #include<bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //      queue<int> s;
// //      s.push(21);
// //      s.push(22);
// //      s.push(23);
// //      s.push(24);
// //      s.pop();
// //      s.push(25);
// //      s.push(26);
// //      s.push(27);

// //      while(!s.empty()){
// //         cout<<s.front()<<" ";
// //         s.pop();
// //      }
// // }

// // // queue using array

// #include <bits/stdc++.h>
// using namespace std;
// int Queue[100], n = 100, front = -1, rear = -1;
// // enqueue insert the element in the end ie the rear part
// void enqueue(int value)
// {
//     if (rear == n - 1)
//     {
//         cout << "Queue Overflow" << endl;
//     }
//     else
//     {
//         if (front == -1)  // If queue is empty, move front to 0
//             front = 0;
//         rear++;
//         Queue[rear] = value;
//         cout << value << " enqueued." << endl;
//     }
//     cout<<endl;
// }

// void dequeue(){
//     if(front ==-1 || front>rear){
//         cout<<"Under flow";
//     }
//     else{
//         cout<<Queue[front]<<" removed from the queue"<<endl;
//         front++;
//     }
//     cout<<endl;
// }
// void display(){
//    if(front ==-1 || front>rear){
//     cout<<"Empty";
//    }
//    else{
//     cout<<"Current queue "<<endl;
//     for(int i=front;i<=rear;i++){
//         cout<<Queue[i]<<" ";
//     }
//     cout<<endl;
//    }
// }
// int main()
// {
//     // enqueue(10);
//     // enqueue(20);
//     // enqueue(30);
//     // enqueue(40);
//     // dequeue();
//     // display();

//     enqueue(5);
//     enqueue(15);
//     enqueue(25);
//     dequeue();
//     enqueue(35);
//     enqueue(45);
//     dequeue();
//     dequeue();
//     enqueue(55);
//     display();

// }

#include <bits/stdc++.h>
using namespace std;
int Queue[100], n = 100, front = -1, rear = -1;
void enqueue(int value)
{
    if (rear == n - 1)
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
            rear++;
            Queue[rear] = value;
            cout << value << " is added to queue" << endl;
        
    }
}
void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << Queue[front] << " removed from the queue";
        front++;
    }
    cout << endl;
}

void display()
{
    for (int i = front; i <= rear; i++)
    {
        cout << Queue[i] << " ";
    }
    cout<<endl;
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue();
    display();
    dequeue();
    dequeue();
    display();
}