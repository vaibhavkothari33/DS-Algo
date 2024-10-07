// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//      stack<int> s;
//      s.push(21);
//      s.push(22);
//      s.push(23);
//      s.push(24);
//      s.pop();
//      s.push(25);
//      s.push(26);
//      s.push(27);

//      while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//      }
// }

// stack using array

#include <bits/stdc++.h>
using namespace std;

int Stack[100], n = 100, top = -1;

void push(int value)
{
    if (top >= n - 1)
    {
        cout << "Overflow";
    }
    else{
        top++;
        Stack[top] = value;
        cout<<value<<" pushed in stack."<<endl;
    }
}
void pop(){
    if(top <=-1){
        cout<<"Stack underflow"<<endl;
    }
    else{
        cout<<Stack[top]<<" pop from stack"<<endl;
        top--;
    }
}
void display(){
    if(top>=0){
        cout<<"Stack elementts are :";
        for(int i=top;i>=0;i--){
            cout<<Stack[i]<<" ";
            
        }
        cout<<endl;
    }
    else{
        cout<<"stack is empty";
    }
}
int main()
{
    push(10);
    display();
    cout<<endl;
    push(20);
    display();
    cout<<endl;
    push(30);
    display();
    cout<<endl;
    push(40);
    display();
    cout<<endl;
    push(50);
    display();
    pop();
    cout<<endl;
    pop();
    display();
    pop();
    cout<<endl;
    display();
    return 0;
}
