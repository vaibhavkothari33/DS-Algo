#include <bits/stdc++.h>
using namespace std;
void insertSort(int arr[], int n)
{
    for (int i = 1; i < n ; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
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
    int arr[5] = {52,85,12,74,02};
    int brr[6] = {78,65,54,45,12,03};

    insertSort(arr,5);
    insertSort(brr,6);

    print(arr,5);
    cout<<endl;
    print(brr,6);
}