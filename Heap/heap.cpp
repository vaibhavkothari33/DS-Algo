// #include <iostream>
// #include <vector>
// using namespace std;

// class MaxHeap {
//     vector<int> heap;

//     void bubbleUp(int index) {
//         while (index > 0) {
//             int parent = (index - 1) / 2;
//             if (heap[parent] < heap[index]) {
//                 swap(heap[parent], heap[index]);
//                 index = parent; // Move up
//             } else {
//                 break;
//             }
//         }
//     }

// public:
//     void insert(int value) {
//         heap.push_back(value);         // Add value at the end
//         bubbleUp(heap.size() - 1);     // Restore max-heap property
//     }

//     void printHeap() {
//         for (int val : heap) cout << val << " ";
//         cout << endl;
//     }
// };

// int main() {
//     MaxHeap mh;
//     mh.insert(50);
//     mh.insert(30);
//     mh.insert(40);
//     mh.insert(10);
//     mh.insert(20);
//     mh.insert(35);
//     mh.insert(45);
//     cout << "Max-Heap after insertion: ";
//     mh.printHeap();
//     // Output: 50 30 45 10 20 35 40
//     return 0;
// }

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Function to heapify a subtree rooted at index 'i'
void heapify(vector<int>& heap, int n, int i) {
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1; // Left child
    int right = 2 * i + 2; // Right child

    // If left child is larger than root
    if (left < n && heap[left] > heap[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && heap[right] > heap[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        swap(heap[i], heap[largest]);
        // Recursively heapify the affected subtree
        heapify(heap, n, largest);
    }
}

// Function to build a max heap
void buildMaxHeap(vector<int>& heap) {
    int n = heap.size();
    // Start from the last non-leaf node and heapify each node
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(heap, n, i);
    }
}

// Function to perform level order traversal of the heap
void levelOrderTraversal(vector<int>& heap) {
    cout << "Level Order Traversal of Max-Heap: ";
    for (int val : heap) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    // Input array (unsorted)
    vector<int> arr = {45, 20, 50, 35, 10, 25, 55, 15, 30, 5, 40};

    // Step 1: Build the max-heap
    buildMaxHeap(arr);

    // Step 2: Display the max-heap using level order traversal
    levelOrderTraversal(arr);

    return 0;
}
