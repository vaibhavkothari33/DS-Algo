#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // go to right
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        // go to left
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[6] = {2, 4, 6, 8, 10, 12};
    int brr[7] = {1, 4, 7, 12, 25, 27, 34};

    int index1 = binarySearch(arr, 6, 12);
    int index2 = binarySearch(brr, 7, 12);
    cout << "Index of 12 in arr is :" << index1;
    cout<<endl;
    cout << "Index of 12 in arr is :" << index2;
}
// time complexity  - o(log n)