#include<bits/stdc++.h>
using namespace std;

// void reverse(int arr[], int n){
//     int start =0;
//     int end=n-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

void swapAlternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
void printArray(int arr[] ,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " " ;
    }
    cout<<endl;
}
int main()
{
    // int n;
    // int sum=0;
    // int arr[n];
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    // for(int i=0;i<n;i++){
    //     sum+=arr[i];
    //     cout<<arr[i]<<endl;
    // }
    // cout<<"The sum of array is: "<<sum;
    int arr[6]={1,4,0,5,-2,15};
    int brr[8]={2,4,6,8,10,14,16};

    // reverse(arr,6);
    // reverse(brr,8);
    swapAlternate(arr,6);
    swapAlternate(brr,7);
    printArray(arr,6);
    printArray(brr,7);
} 

