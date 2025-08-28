## Code

```cpp
// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int max, min;
        max = min = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > max) max = arr[i];
            if (arr[i] < min) min = arr[i];
        }
        return {min, max};
    }
};
```

## Logic

```cpp
pair<int, int> getMinMax(vector<int> arr) {
    int max, min;
    max = min = arr[0];   // Step 1
```

First element of array is taken as both **minimum** and **maximum** (starting point).

```cpp
    for (int i = 1; i < arr.size(); i++) {   // Step 2
        if (arr[i] > max) max = arr[i];      // Step 2a
        if (arr[i] < min) min = arr[i];      // Step 2b
    }
```

Then loop starts from index 1 → check every element:

- If bigger than current `max` → update `max`
- If smaller than current `min` → update `min`

```cpp
    return {min, max};   // Step 3
}
```

Finally, return both values together as `{min, max}`.

---

## Example

Example:
`arr = [3, 2, 1, 56, 10000, 167]`

1. Start: `min = 3`, `max = 3`
2. Look at `2` → `2 < 3` → update `min = 2`
3. Look at `1` → `1 < 2` → update `min = 1`
4. Look at `56` → `56 > 3` → update `max = 56`
5. Look at `10000` → `10000 > 56` → update `max = 10000`
6. Look at `167` → nothing changes

Final : `{1, 10000}` → same as example output.

---

## Complexity Analysis

* **Time Complexity** → `O(n)`

  * Visiting every element exactly **once**.
* **Space Complexity** → `O(1)`

  * Using only two variables (`min`, `max`), no extra memory depending on array size.

---
