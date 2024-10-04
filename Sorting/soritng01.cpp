// #include <iostream>
// using namespace std;

// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n-1; i++) {
//         int minIndex = i;
//         for (int j = i+1; j < n; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         // Swap the found minimum element with the first element
//         swap(arr[minIndex], arr[i]);

//         // Print array after each round
//         cout << "Round " << i+1 << " of sorting: ";
//         for (int k = 0; k < n; k++) {
//             cout << arr[k] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr)/sizeof(arr[0]);
    
//     cout << "Selection Sort: " << endl;
//     selectionSort(arr, n);
    
//     return 0;
// }


#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap if the element is greater than the next
                swap(arr[j], arr[j+1]);
            }
        }
        // Print array after each round
        cout << "Round " << i+1 << " of sorting: ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Bubble Sort: " << endl;
    bubbleSort(arr, n);

    return 0;
}


// #include <iostream>
// using namespace std;

// void insertionSort(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;

//         // Move elements of arr[0..i-1], that are greater than key, to one position ahead
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;

//         // Print array after each round
//         cout << "Round " << i << " of sorting: ";
//         for (int k = 0; k < n; k++) {
//             cout << arr[k] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int arr[] = {12,9,15,7,5};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     cout << "Insertion Sort: " << endl;
//     insertionSort(arr, n);

//     return 0;
// }
