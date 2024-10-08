#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        cout << "Round " << i << " of sorting " << endl;
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int brr[6] = {64, 69, 12, 22, 11};
       int arr[10] =  {15, 5, 4, 18, 12, 19, 14, 10, 8, 20};
    // int brr[6] = {7,8,54,45,12,03};

    insertionSort(arr, 10);
    insertionSort(brr,6);

    // print(arr,5);
    cout << endl;
    // print(brr,6);
}