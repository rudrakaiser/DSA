## Finding Maximum Element in an Array

### Logic

```cpp
int position = 0;
int maximum = arr[0];

for (int i = 1; i < n; i++) {
    if (arr[i] > maximum) {
        position = i;
        maximum = arr[i];
    }
}
```

### Output

```
Array Size (1D Array) : 8
Enter All The Array Element : -7 4 2 12 -9 2 13 14
Maximum Element : 14
Max Element Position : 7
Minimum Element : 14
Mim Element Position : 4
```

### Problem

- [Min and Max in Array](https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1)
    - [Click Here to get the Solution]()

### Resource

- [w3resource](https://www.w3resource.com/c-programming-exercises/array/c-array-exercise-9.php)
- [Geeks For Geeks](https://www.geeksforgeeks.org/dsa/maximum-and-minimum-in-an-array/)