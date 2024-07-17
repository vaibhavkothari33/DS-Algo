#include <bits/stdc++.h>
using namespace std;

int getMax (int arr[],int size){
    int maxi = INT_MIN;
    for(int i=0;i<size;i++){
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}

int getMin (int arr[],int size){
    int mini = INT_MAX;
    for(int i=0;i<size;i++){
        mini=min(mini,arr[i]);
    }
    return mini;
}
// int getMax (int arr[],int size){
//     int maxi = INT_MIN;
//     for(int i=0;i<size;i++){
//         if(arr[i]>maxi){
//             maxi = arr[i];
//         }
//     }
//     return maxi;
// }

// int getMin (int arr[],int size){
//     int mini = INT_MAX;
//     for(int i=0;i<size;i++){
//         if(arr[i]<mini){
//             mini = arr[i];
//         }
//     }
//     return mini;
// }

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<"Maximun element "<< getMax(arr,n);
   cout<<endl;
   cout<<endl;
   cout<<"Minimm element "<< getMin(arr,n);
    
}