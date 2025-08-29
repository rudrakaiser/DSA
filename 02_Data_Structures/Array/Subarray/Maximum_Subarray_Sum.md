## Logic of Maximum Subarray Sum

```cpp
vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
int maxSubarraySum = INT32_MIN;
```

👉 We are given an array (with negative and positive numbers).
👉 `maxSubarraySum` is initialized to the smallest possible integer, so any real sum will be bigger.

```cpp
for (int start = 0; start < arr.size(); start++) {
    for (int end = start; end < arr.size(); end++) {
```

👉 Two loops pick every possible subarray using `(start, end)` index pair.

```cpp
        int sum = 0;
        for (int i = start; i <= end; i++) {
            sum += arr[i];
        }
```

👉 Inner loop actually calculates the sum of elements between `start` and `end`.

```cpp
        maxSubarraySum = max(maxSubarraySum, sum);
```

👉 After calculating sum, update the maximum found so far.

```cpp
cout << "Max Subarray Sum: " << maxSubarraySum << endl;
```

👉 Finally print the maximum subarray sum.

## Example

Array = `[-2, 1, -3, 4, -1, 2, 1, -5, 4]`

Some subarray sums:

* `[ -2 ] = -2`
* `[ -2, 1 ] = -1`
* `[ 4, -1, 2, 1 ] = 6` ✅ (this is the max)
* `[ -5, 4 ] = -1`

Final Answer → **Max Subarray Sum = 6**

## Complexity

* Outer loop (`start`) → `n` times
* Middle loop (`end`) → \~`n/2` times
* Inner loop (`i`) → calculates sum → adds another `n` factor

👉 So total = **O(n³)** time.  
👉 Space = **O(1)** (only variables).

## ✅ Conclusion

This code **finds the maximum subarray sum** by brute force:

* Checks **every possible subarray**
* Calculates its sum
* Keeps track of the maximum

⚡ **But note:** This can be solved much faster using **Kadane’s Algorithm** in `O(n)`.
