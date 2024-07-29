#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<string> s;

    // first in last out 
    // shaadi ke plate ka example 

    s.push("Vaibhav");
    s.push("Kothari");
    s.push("Kumar");
    cout<<"Top element ->"<<s.top()<<end; //kumar
    s.pop();


    cout<<"size of stack"<<s.size();
    cout<<"size of stack"<<s.empty();


}