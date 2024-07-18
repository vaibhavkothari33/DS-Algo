#include <bits/stdc++.h>
using namespace std;
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swapAlternate(int arr[], int n)
{
    int index = 0;

    while ((index + 1 )< n)
    {
        swap(arr[index], arr[index + 1]);
        index += 2;
    }
}
int main()
{
    int arr[5] = {5, 4, 7, 8, 9};
    int brr[6] = {5, 4, 7, 8, 9, 14};

    swapAlternate(arr, 5);
    swapAlternate(brr, 6);

    printArr(arr, 5);
    printArr(brr, 6);
}