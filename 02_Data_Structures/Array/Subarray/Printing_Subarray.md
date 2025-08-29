## Logic of Pringting Subarray

```cpp
for (int start = 0; start < arr.size(); start++) {
    for (int end = start; end < arr.size(); end++) {
```

👉 These two loops pick **every possible (start, end)** index pair in the array.
That’s how you define a subarray.

```cpp
        for (int i = start; i <= end; i++) {
            cout << arr[i];
        }
```

👉 This inner loop prints all elements from `start` to `end`.
So, you get the actual subarray.

```cpp
        cout << " ";
```

👉 Space after each subarray for clarity.

```cpp
    }
    cout << endl;
}
```

👉 New line after finishing all subarrays starting at a given `start`.

### [See Full Code]()

## Example

Array = `[1, 2, 3]`

* `start = 0`

  * `end = 0 → [1]`
  * `end = 1 → [1 2]`
  * `end = 2 → [1 2 3]`
* `start = 1`

  * `end = 1 → [2]`
  * `end = 2 → [2 3]`
* `start = 2`

  * `end = 2 → [3]`

#### ✅ All subarrays printed.

---

## Complexity

* Outer loop (`start`) → runs `n` times.
* Middle loop (`end`) → on average runs \~`n/2` times.
* Inner loop (`i`) → prints elements → in total across all subarrays, about `O(n^3)` operations.

👉 Overall:

* **Time Complexity:** `O(n^3)` (since printing subarrays themselves takes that much).
* **Space Complexity:** `O(1)` (only loops, no extra memory).
