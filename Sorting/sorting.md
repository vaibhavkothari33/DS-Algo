# Sorting Algorithms

# Selection Sort

### Mostly used when the data in the array /list / vector is smaller as it takes less memory 
### Space Comp: O(1)
### Time Comp: O(n^2)
```cpp
  for (int i = 0; i < n - 1; i++) {
    int index1 = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[index1]) {
        index1 = j;
      }
    }
    swap(arr[index1], arr[i]);
  }
```
##


# Bubble Sort

### Mostly used when the data in the array /list / vector is smaller as it takes less memory 
### Space Comp: O(1)
### Time Comp: O(n^2)


```cpp
  for (int i = 0; i < n - 1; i++) {
    int index1 = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[index1]) {
        index1 = j;
      }
    }
    swap(arr[index1], arr[i]);
  }
```