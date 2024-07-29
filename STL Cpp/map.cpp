#include<bits/stdc++.h>
using namespace std;

int main(){
    // map is always in key value pair

    map<int,string> s;

    m[1]="Love";
    m[2]="Babbar";
    m[13]="Vaibhav";
    m.insert(5,"Bheem");


    for(auto i:m){
        cout<<i.first<<" "i.second<<endl;
    }

    m.erase(13);
    cout<<"finding 132 --> "m.count(13)<<endl;
    // Time---> O(log n)

    
    auto it = m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}