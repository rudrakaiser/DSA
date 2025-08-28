## Code

```cpp
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int a = 0, b = arr.size() - 1;
        while (a < b) {
            arr[a] = arr[a] ^ arr[b];
            arr[b] = arr[a] ^ arr[b];
            arr[a] = arr[a] ^ arr[b];
            a++; b--;
        }
    }
};
```

## Logic

```cpp
void reverseArray(vector<int> &arr) {
    int a = 0, b = arr.size() - 1;   // Step 1
```

Two pointers:

- `a` starts from the **beginning**
- `b` starts from the **end**

```cpp
    while (a < b) {                  // Step 2
```

Keep swapping while `a` is before `b`.

```cpp
        arr[a] = arr[a] ^ arr[b];    // Step 3a
        arr[b] = arr[a] ^ arr[b];    // Step 3b
        arr[a] = arr[a] ^ arr[b];    // Step 3c
```

This is the **XOR swap trick** (swap without using a temporary variable):

- After these 3 lines, `arr[a]` and `arr[b]` exchange their values.

```cpp
        a++; b--;   // Step 4
```

Move pointers towards the middle.

#### When loop ends → array is fully reversed.

## Example

Input: `arr = [1, 2, 3, 4, 5]`

1. Start: `a=0, b=4`

   * Swap arr\[0] and arr\[4] → `[5, 2, 3, 4, 1]`
2. Next: `a=1, b=3`

   * Swap arr\[1] and arr\[3] → `[5, 4, 3, 2, 1]`
3. Now `a=2, b=2` → loop stops.

#### Final Output: `[5, 4, 3, 2, 1]`

## Complexity Analysis

* **Time Complexity** → `O(n/2)` = `O(n)`

  * Each element is swapped once, so linear time.
* **Space Complexity** → `O(1)`

  * Only two pointers `a` and `b`, no extra memory.