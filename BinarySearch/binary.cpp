// #include <bits/stdc++.h>
// using namespace std;
// int binarySearch(int arr[], int size, int key)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = start + (end - start) / 2;

//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         // go to right
//         else if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         // go to left
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return -1;
// }
// int main()
// {
//     int arr[6] = {2, 4, 6, 8, 10, 12};
//     int brr[7] = {1, 4, 7, 12, 25, 27, 34};

//     int index1 = binarySearch(arr, 6, 12);
//     int index2 = binarySearch(brr, 7, 12);
//     cout << "Index of 12 in arr is :" << index1;
//     cout<<endl;
//     cout << "Index of 12 in arr is :" << index2;
// }
// // time complexity  - o(log n)

#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int size,int target){
    int start = 0;
    int end = size-1;


    while(start<=end){

    int mid= start +(end-start)/2;
        
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else if(arr[mid]<target){
            start = mid+1;
        }
        else{
            return -1;
        }
    }

}
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
     int arr[5]={2,4,6,8,10};
     int brr[7]={2,4,6,8,10,12,14};
    //  int brr[6]={14,9,6,3,2,-1};

     print(arr,5);
     print(brr,6);

     int index1 = binarysearch(arr,5,6);
     int index2 = binarysearch(brr,7,14);

     cout<<index1<<endl;
     cout<<index2<<endl;
}