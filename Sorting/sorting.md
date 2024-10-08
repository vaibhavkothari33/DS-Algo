# Sorting Algorithms

<br>

## A stable sorting algorithm maintains the relative order of the items with equal sort keys. An unstable sorting algorithm does not.

<br>
<br>

# Selection Sort

### Mostly used when the data in the array /list / vector is smaller as it takes less memory

### Space Comp: O(1)

### Time Comp: O(n^2)

```cpp
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
    }
}
```

##

<br>
<br>

# Bubble Sort

### Space Comp: O(1)

### Time Comp: O(n^2)

### Best Time Comp: O(n)

```cpp

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

```

<br>
<br>

# Insertion Sort

### Think of the card example Swap nai shift hoga

### it make the array sorted from the starting

### Space Comp: O(1)

### Time Comp: O(n^2)

### Best Time Comp: O(n)

### For loop

```cpp
 for(int i=0;i<n;i++){
        int temp = arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                // shift
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
```

### while loop

```cpp
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
```

### merge sort

```cpp
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1; // Size of left subarray
    int n2 = right - mid;    // Size of right subarray

    // Create temporary arrays to hold the two subarrays
    int L[n1], R[n2];

    // Copy data into temporary arrays
    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    // Merge the two subarrays back into arr[left..right]
    int i = 0, j = 0, k = left; // Initial indices of L, R and merged subarray

    // Compare elements from both arrays and merge them in sorted order
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of L[] (if any)
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements of R[] (if any)
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Function to perform merge sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Calculate the middle point
        int mid = left + (right - left) / 2;

        // Recursively sort the two halves
        mergeSort(arr, left, mid);      // Sort first half
        mergeSort(arr, mid + 1, right); // Sort second half

        // Merge the two sorted halves
        merge(arr, left, mid, right);
    }
}
```