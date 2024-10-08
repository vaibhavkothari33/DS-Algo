#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        cout<<"Round "<<i+1<<" of sorting "<<endl;
        for(int k=0;k<n;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    // int arr[] = {64,69,12,22,11};
    // int arr[] = {9,3,5,2,7,8};
    int arr[] =  {15, 5, 4, 18, 12, 19, 14, 10, 8, 20};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Bubble Sort: " << endl;
    bubbleSort(arr, n);
    
    return 0;
}