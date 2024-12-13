### linear search

```cpp
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int key;
    cin>>key;
     int arr[10] = {9,6,5,22,5,75,1,5,21,85};
     for(int i=0;i<10;i++){
        if(arr[i] == key){
            cout<<"Found at index: "<<i<<endl;
            return 0;
        }
     }
    cout<<"No element found";
}
```
TC: O(n)  best case = O(1) when the element is found at index first
SC: O(1)

### Binary search

```cpp
int binarysearch(int arr[],int size,int target){
    int start = 0;
    int end = size-1;


    while(start<=end){

    int mid= start +(end-start)/2;
        
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else if(arr[mid]<target){
            start = mid+1;
        }
        else{
            return -1;
        }
    }

```
TC: O(log n)  
SC: O(1)

### adding a element in the array

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;
    cout << n << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

    int newele = 52;

    for(int i=n;i<1;i++){
        arr[i-1] = arr[i];
    }

    arr[0] = newele;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

}

```
or use insert in vector

### count the number of words
```cpp
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
     string sentence;
     cout<<"Enter the sentence"<<endl;
     getline(cin,sentence);
     stringstream vaibhav(sentence);
     string word;
     int count = 0;
     while(vaibhav>>word){
        cout<<word<<" ";
        count++;
     }
     cout<<count;
}
```
### sum of n terms
```cpp
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
     int arr[n];
     int sum =0;
     for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
     }
     cout<<sum;
}
```

### decimal to binary

```cpp
#include <iostream>
using namespace std;
int main() {
    int decimalNum;
    cout << "Enter a decimal number: ";
    cin >> decimalNum;

    int binaryNum[32]; // Array to store the binary representation, assuming 32-bit integer
    int i = 0;

    while (decimalNum > 0) {
        binaryNum[i] = decimalNum % 2;
        decimalNum = decimalNum / 2;
        i++;
    }

    cout << "Binary representation: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binaryNum[j];
    }

    return 0;
}
```

### reverse a number

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    while (n > 0)
    {
        int last = n % 10;
        n = n / 10;
        sum = sum * 10 + last;
    }
    cout << sum;
}
```

## GCD
```cpp
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
         return gcd(b,a%b);
    }
}
int main()
{
     int a,b;
     cin>>a;
     cin>>b;
     cout<<"the GCD of a and b is: "<<gcd(a,b);
}
```

## Inheritance (Reusability)
## Inheritance is a process of obtaining the data members and methods
## from one class to another class, plus can have its own is known as
## inheritance.

## Polymorphism
## The same entity (function or object) behaves differently in different
## scenarios.

## Abstraction
## Hiding lower-level details and exposing only the essential and
## relevant details to the users

## Encapsulation
## Wrapping data and methods in a single unit to prevents
## un-authorized access from outside class.

### swaping 
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    cout << "Before swap" << endl;
    cout << a << " " << b << endl;
    // int temp;
    int arr[5]={2,3,4,5,6};
    cout<<arr[0]<<" ";
    cout<<arr[1]<<" ";
    cout<<arr[2]<<" ";
    cout<<arr[3]<<" ";
    cout<<arr[4]<<" ";
    cout<<arr[5]<<" ";  // garbagr value
    cout<<arr[9]<<" ";  // garbagr value
    cout<<endl;
    // temp = a;
    // a=b;
    // b = temp;
    swap(a,b);
    cout << "After swap" << endl;
    cout << a << " " << b << endl;
}
```


## insert and traversal in trees
```cpp

// Define a BST node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

// Function to insert a new value into the BST
Node* insert(Node* root, int value) {
    // If the tree is empty, create a new node and return it
    if (root == nullptr) {
        return new Node(value);
    }

    // Traverse to the correct position and insert the value
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

// Inorder traversal of BST (Left - Root - Right)
void inorderTraversal(Node* root) {
    if (root == nullptr) return;

    inorderTraversal(root->left);    // Traverse left subtree
    cout << root->data << " ";       // Visit root
    inorderTraversal(root->right);   // Traverse right subtree
}
```

```cpp
#include <iostream>
#include <vector>
using namespace std;

// Function to heapify a subtree rooted at index i
void heapify(vector<int>& arr, int n, int i) {
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1; // Left child
    int right = 2 * i + 2; // Right child

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than the largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
        // Recursively heapify the affected subtree
        heapify(arr, n, largest);
    }
}

// Function to build a max heap
void buildHeap(vector<int>& arr, int n) {
    // Start from the last non-leaf node and move upwards
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

// Function to perform heap sort
void heapSort(vector<int>& arr) {
    int n = arr.size();

    // Step 1: Build a max heap
    buildHeap(arr, n);

    // Step 2: Extract elements from the heap one by one
    for (int i = n - 1; i > 0; i--) {
        // Move the current root to the end
        swap(arr[0], arr[i]);

        // Call heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

// Utility function to print an array
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Main function to test the heap sort implementation
int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};

    cout << "Original array: ";
    printArray(arr);

    heapSort(arr);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
```
heap sort and heapify and build heap