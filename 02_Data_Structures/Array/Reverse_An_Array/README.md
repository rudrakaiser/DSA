## Reversing an Array

### Logic

```cpp
// two pointer method
int a = 0, b = arr.size() - 1;

while (a < b) {
    // swap(arr[a], arr[b]);
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;

    a++; b--;
}
```

### [See Full Code]()

### Output

```
Array Size : 5
Enter Array Elements : 1 2 3 4 5
Reversed : [ 5 4 3 2 1 ]
```

```
Array Size : 10
Enter Array Elements : 1 2 3 4 5 6 7 8 9 10
Reversed : [ 10 9 8 7 6 5 4 3 2 1 ]
```

### Problem

- [Reverse an Array](https://www.geeksforgeeks.org/problems/reverse-an-array/1)
    - [Click Here to get the Solution]()

### Learning Resource

- [Take U Forward](https://takeuforward.org/data-structure/reverse-a-given-array/)
- [Geeks For Geeks](https://www.geeksforgeeks.org/dsa/program-to-reverse-an-array/)