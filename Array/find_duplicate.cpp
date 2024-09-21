// #include <bits/stdc++.h>
// using namespace std;
// int find_dulicate(int arr[], int n)
// {
//     int ans = 0;
//     // we know that we we do XOR operation
//     // with the same element becomes 0
//     // and 0 with something else will be something else
//     for (int i = 0; i < n; i++)
//     {
//         ans = ans ^ arr[i];
//         cout<<ans<<" ";
//     }
//     return ans;
// }
// void printArr(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int arr[4] = {11, 23, 11, 34};
//     find_dulicate(arr, 4);
//      printArr(arr,4);
// }

#include <iostream>
using namespace std;

int find_duplicate(int arr[], int n)
{
    int ans = 0;
    // XOR all elements of the array
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
        // cout << "XOR result after step " << i+1 << ": " << ans << endl;  // for debugging
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 2, 4, 2};  // Example array with duplicate
    // int n = sizeof(arr) / sizeof(arr[0]);  // Calculate size of the array

    int duplicate = find_duplicate(arr, 5);  // Call the function to find the duplicate
    
    cout << "The duplicate element is: " << duplicate << endl;  // Print the result

    return 0;
}
