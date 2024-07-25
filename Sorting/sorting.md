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
<br>
<br>

# Bubble Sort

### Space Comp: O(1)
### Time Comp: O(n^2)
### Best Time Comp: O(n)


```cpp
     for (int i = 0; i < n - 1; i++) {
         for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                 swap(arr[i], arr[j]);
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
int i = 1;
  while (i < n) {
    int j = i - 1;
    int temp = arr[i];
    while (j >= 0) {
      if (arr[j] > temp) {
        arr[j + 1] = arr[j];

      } else {
        break;
      }
      j--;
    }
    i++;
    arr[j + 1] = temp;
  }
```