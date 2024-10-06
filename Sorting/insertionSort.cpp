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
    int arr[] = {64, 69, 12, 22, 11};
    // int brr[6] = {78,65,54,45,12,03};

    insertionSort(arr, 5);
    // insertionSort(brr,6);

    // print(arr,5);
    cout << endl;
    // print(brr,6);
}