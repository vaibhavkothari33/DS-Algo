#include <bits/stdc++.h>
using namespace std;
int getMax(int arr[], int n)
{
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}
int getMin(int arr[], int n)
{
    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
        mini=min(mini,arr[i]);
    }
    return mini;
}
int main()
{
    int n;
    cout << "enter the size of array";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "The maximum element is: " << getMax(arr, n) << endl;
    cout << "The minimum element is: " << getMin(arr, n) << endl;
}