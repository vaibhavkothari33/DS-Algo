#include <bits/stdc++.h>
void selectionSort(vector<int> &arr, int n) {
    for(int i=0;i<n-1;i++){
        int minIndex=0;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }

        }
        swap(arr[minIndex],arr[i]);
    }
}