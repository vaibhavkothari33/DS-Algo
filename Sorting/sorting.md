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
