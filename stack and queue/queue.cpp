#include<bits/stdc++.h>
using namespace std;

int main()
{
     queue<int> s;
     s.push(21);
     s.push(22);
     s.push(23);
     s.push(24);
     s.pop();
     s.push(25);
     s.push(26);
     s.push(27);

     while(!s.empty()){
        cout<<s.front()<<" ";
        s.pop();
     }
}
