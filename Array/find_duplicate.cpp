#include<bits/stdc++.h>
using namespace std;
int find_dulicate(int arr [] ,int n){
    int ans=0;
    // we know that we we do XOR operation
    // with the same element becomes 0
    // and 0 with something else will be something else
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;

}
int main()
{
     
}