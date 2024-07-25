#include <bits/stdc++.h>
using namespace std;

int main(){
    // shrink to fit
    vector<int> v ;
    vector<int> a(5,1);// all 5 element is 1,1,1,1,1

    cout<<"Capacity---> "v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity---> "v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"Capacity---> "v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"Capacity---> "v.capacity()<<endl;
    cout<<"size--> " v.size()<<endl;

    // simmilar to array

    v.pop_back()
    // removes the last element ;
    cout<<"size--> " v.at(2)<<endl;

    // capacity tells the number of element it can hold
    // size tells the number of element it has

}