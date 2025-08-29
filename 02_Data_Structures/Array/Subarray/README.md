# Subarray

## 📌 What is a Subarray?

A **subarray** of an array is a **contiguous (continuous) part of the array**.
That means you take some consecutive elements from the array, without changing their order and without skipping in between.

👉 In short:

* Subarray = contiguous slice of the array
* Order must remain the same
* Length can be **1** up to the full array length

## 📌 Example

Suppose we have an array:

```
arr = [1, 2, 3, 4]
```

### ✅ Possible Subarrays:

* Length **1** subarrays:
  `[1]`, `[2]`, `[3]`, `[4]`

* Length **2** subarrays:
  `[1, 2]`, `[2, 3]`, `[3, 4]`

* Length **3** subarrays:
  `[1, 2, 3]`, `[2, 3, 4]`

* Length **4** subarray (whole array):
  `[1, 2, 3, 4]`

### So in total:
Number of subarrays = `n * (n + 1) / 2`  
Here `n = 4`, so total = `4 * 5 / 2 = 10` subarrays.

---

### ❌ What is NOT a subarray?

For the same array `[1, 2, 3, 4]`:

* `[1, 3]` ❌ (not contiguous, skipped 2)
* `[2, 4]` ❌ (not contiguous, skipped 3)
* `[4, 2, 1]` ❌ (order changed)

---

## 👉 Practice Problems

### ✅ Problem 1 : Printing Subarrays

Given an array of integers, print **all possible subarrays** of the array.
A subarray is defined as a contiguous part of the array formed by choosing a starting index and an ending index.

**Constraints:**

* ${1 ≤ arr.size() ≤ 100}$
* ${-10^3 ≤ arr[i] ≤ 10^3}$

**Example:**

**Input:**

```
arr = [1, 2, 3, 4, 5]
```

**Output:**

```
1 12 123 1234 12345 
2 23 234 2345 
3 34 345 
4 45 
5
```

- [SOLUTION CODE](https://github.com/rudrakaiser/DSA/blob/main/02_Data_Structures/Array/Subarray/printing_subarray.cpp)
- [LOGIC](https://github.com/rudrakaiser/DSA/blob/main/02_Data_Structures/Array/Subarray/Printing_Subarray.md)

---

### ✅ Problem 2 : Maximum Subarray Sum

**Task:**
Given an array of integers, find the **maximum sum** of any subarray.
A subarray is a contiguous part of the array formed by choosing a starting index and an ending index.

**Constraints:**

* ${1 ≤ arr.size() ≤ 10^5}$
* ${-10^4 ≤ arr[i] ≤ 10^4}$

**Example 1:**

**Input:**

```
arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
```

**Output:**

```
Max Subarray Sum: 6
```

**Explanation:**
The subarray `[4, -1, 2, 1]` has the maximum sum = `6`.

- [SOLUTION CODE](https://github.com/rudrakaiser/DSA/blob/main/02_Data_Structures/Array/Subarray/maximum_subarray_sum.cpp)
- [LOGIC](https://github.com/rudrakaiser/DSA/blob/main/02_Data_Structures/Array/Subarray/Maximum_Subarray_Sum.md)