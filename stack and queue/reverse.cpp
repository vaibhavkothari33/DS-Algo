// write a program to reverse a string

#include<bits/stdc++.h>
using namespace std;
string reverse(string str){
    stack<char>s;
    for(int i=0;i<str.length();i++){
        s.push(str[i]);
    }

    string revesedstr = "";
    while(!s.empty()){
        revesedstr +=s.top();
        s.pop();
    }
return revesedstr;
}
int main()
{
     string name = "dlrow olleh";
     cout<<reverse(name);
}