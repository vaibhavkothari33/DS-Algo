// #include <bits/stdc++.h>
// using namespace std;

// void selectionSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int temp = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[temp])
//             {
//                 temp = j;
//             }
//         }
//         swap(arr[i], arr[temp]);
//     }
// }

// void bubbleSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//             cout << "Round " << i << " of sorting: ";
//             for (int k = 0; k < n; k++)
//             {
//                 cout << arr[k] << " ";
//             }
//             cout << endl;
//         }
//     }
// }

// void insertionSort(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int temp = arr[i];
//         int j = i - 1;

//         while (j >= 0 && arr[j] > temp)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = temp;
//         cout << "Round " << i << " of sorting: ";
//         for (int k = 0; k < n; k++)
//         {
//             cout << arr[k] << " ";
//         }
//         cout << endl;
//     }
// }


// int main()
// {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Original Array: ";
//     printArray(arr, n);

//     // selectionSort(arr, n);
//     bubbleSort(arr, n);
//     // insertionSort(arr, n);

//     cout << "Sorted Array: ";
//     printArray(arr, n);

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int temp = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[temp])
            {
                temp = j;
            }
        }
        swap(arr[i], arr[temp]);

        cout<<"Round "<<i+1<<" of sorting "<<endl;
        for(int k=0;k<n;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    // int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, n);

    selectionSort(arr, n);
    cout << "Sorted Array: ";
    printArray(arr, n);

    return 0;
}

