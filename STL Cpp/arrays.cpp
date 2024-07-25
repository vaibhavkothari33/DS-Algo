#include <bits/stdc++.h>
using namespace std;

int main(){
    int basic[3]={1,2,3};

    array<int,4> a = {1,2,3,4};

    int size=a.size();

    // element print --> a.at(2)
    cout<<"Element at 2nd index is: "<<a.at(2)<<endl;

    // empty or not --> a.empty() return boolean value
    cout<<"Array is empty : "<<a.empty()<<endl;

    // first and last element of array
    cout<<"First element"<< a.front()<<endl;
    cout<<"Last element"<< a.back()<<endl;
}