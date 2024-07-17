#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0;
    int last = size - 1;
    while (start <= last)
    {
        swap(arr[start], arr[last]);
        start++;
        last--;
    }
}
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {1, 4, 5, 8, 6, 2};
    int brr[7] = {1, 4, 5, 8, 6, 2, 3};

    reverse(arr, 6);
    reverse(brr, 7);

    printArr(arr, 6);
    printArr(brr, 7);
}