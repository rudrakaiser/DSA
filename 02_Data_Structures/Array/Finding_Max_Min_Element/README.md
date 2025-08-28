## Finding Maximum and Minimum Element in Array

### Logic

```cpp
int maximum, minimum;
maximum = minimum = arr[0];

int maxPos, minPos;
maxPos = minPos = 0;

for (int i = 1; i < n; i++) {
    if (arr[i] > maximum) {
        maximum = arr[i];
        maxPos = i;
    }
    if (arr[i] < minimum) {
        minimum = arr[i];
        minPos = i;
    }
}
```

### [See Full Code]()

### Output

```
Array Size (1D Array) : 8
Enter All The Array Element : -7 4 2 12 -9 2 13 14
Maximum Element : 14
Max Element Position : 7
Minimum Element : 14
Min Element Position : 4
```

### Problem

- [Min and Max in Array](https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1)
    - [Click Here to get the Solution](https://github.com/rudrakaiser/DSA/blob/main/02_Data_Structures/Array/Finding_Max_Min_Element/Min_and_Max_in_Array.md)

### Learning Resource

- [w3resource](https://www.w3resource.com/c-programming-exercises/array/c-array-exercise-9.php)
- [Geeks For Geeks](https://www.geeksforgeeks.org/dsa/maximum-and-minimum-in-an-array/)