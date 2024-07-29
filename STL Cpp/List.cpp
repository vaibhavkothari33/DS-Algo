#include <bits/stdc++.h>
using namespace std;

int main(){
    // Double linked list
    // can't use the array methods kink off
    list<int> l;


    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }

    cout<<endl;

    l.erase(l.begin());
    cout<<"the size of the array is "<<l.size()<<endl;

}