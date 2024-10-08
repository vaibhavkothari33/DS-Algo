#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    
    int arr[] = {1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // insert 10 at first pos
    // arr[0]=10;
    //  for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    
    // insert 10 at thrid position by increasing the size of the array
    for(int i=n+1;i>3;i--){
        arr[i] = arr[i-1];
    }
    arr[3]=54;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}