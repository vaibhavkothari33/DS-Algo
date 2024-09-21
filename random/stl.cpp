#include <bits/stdc++.h>
using namespace std;
void explainPair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;

    pair <int ,pair<int,int>> pw ={1,{2,5}};
    cout<<p.first <<pw.second.second;

    pair<int,int>arr[]={{1,2},{3,5}};
    cout<<arr[1].second;
}

// vectors
void vectorsexplain(){
    vector<int>v;

    v.push_back(22);
    v.emplace_back(2);

    vector<pair<int ,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(5,3);

    // vector<int> v(5);
    // vector<int> v(5,100);
    // vector<int> v(v2);
    // cout<<v[1];

    vector<int>::iterator it = v.begin();

    // .begin refer to the memory location and applying * print the elements
    it++;
    // cout<<*(it)<<" ";

    for(auto it=v.begin();it !=v.end();it++){
        cout<<*(it)<<" ";
    }


    for (auto it:v){
        cout<<it<<" "; 
    }
}


int main()
{
    explainPair();
    vectorsexplain();
}