#include <bits/stdc++.h>
using namespace std;
int firstOcc(int arr[], int size, int key)
{
    int start = 0;
    int last = size - 1;
    int mid = start + (last - start) / 2;
    int ans = -1;

    while (start <= last)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            last = mid - 1;
        }
        else if (key < arr[mid])
        {
            last = mid - 1;
        }
        else if(key>arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (last - start) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int size, int key)
{
    int start = 0;
    int last = size - 1;
    int mid = start + (last - start) / 2;
    int ans = -1;

    while (start <= last)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            last = mid - 1;
        }
        else if(key>arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (last - start) / 2;
    }
    return ans;
}
int main()
{
    int arr[6] = {1, 4, 6, 8, 6, 12};
    int brr[7] = {1, 4, 7, 12, 12,12,27,};

    int index1 = firstOcc(brr, 7, 12);
    int index2 = lastOcc(brr, 7, 12);
    cout << "First Index of 12 in arr is :" << index1;
    cout << endl;
    cout << "Last Index of 12 in arr is :" << index2;
    cout<<endl;

    int index3 = firstOcc(arr, 6, 6);
    int index4 = lastOcc(arr, 6, 6);
    cout << "First Index of 6 in arr is :" << index3;
    cout << endl;
    cout << "Last Index of 6 in arr is :" << index4;
}