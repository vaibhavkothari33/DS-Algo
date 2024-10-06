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
    int arr[] = {1,2,3,4};
    // int arr[] = {9,3,5,2,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Bubble Sort: " << endl;
    bubbleSort(arr, n);
    
    return 0;
}