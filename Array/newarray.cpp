#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void swapAlter(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i + 2 < size)
        {
            swap(arr[i],arr[i+2]);
        }
    }
}
// second method
void swapAlternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int brr[5] = {7, 8, 9, 4, 5};

    // reverse(arr, 6);
    // reverse(brr, 5);
    swapAlter(arr,6);
    swapAlter(brr,5);

    print(arr, 6);
    print(brr, 5);
}