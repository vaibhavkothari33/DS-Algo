#include<bits/stdc++.h>
using namespace std;

int main(){
    // set works in BST and a element can occur only once and it will be sorted
    // set is slower than unorder set
    set<int>s;

    s.insert(5);
    s.insert(4);
    s.insert(7);
    s.insert(2);
    s.insert(4);
    s.insert(7);
    s.insert(2);

    // set ke values ==> 2,4,5,7


    for(auto i:s){
        cout<<i;<<endl;
    }

    s.erase(s.begin());

    // time compleixty --->  O(log n)
    s.find(5);// will give iterater of 5 
    
}