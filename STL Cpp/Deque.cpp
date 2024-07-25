#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int>d;

    d.push_back(1);
    d.push_front(2);
    cout<<"before eraser";
    d.erase(d.begin(),d.begin()+1);

    for(int i:d){
        cout<<i<<endl;
    }
}