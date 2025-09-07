# Moore's Voting Algorithm

Moore's Voting Algorithm (also known as the Boyer–Moore Majority Vote Algorithm) is an efficient algorithm to find the majority element in a given array, if it exists.  
A **majority element** is an element that appears more than ⌊ n/2 ⌋ times in the array, where *n* is the size of the array.   

It works in two phases:
1. **Candidate Selection Phase** – Identify a potential majority element.
2. **Verification Phase** – Check if the candidate is actually a majority element.

If no majority element exists, the algorithm will return `-1`.


## 🛠️ Implementation (C++)

```cpp
// Moore's Algorithm Function
int moores_voting_algorithm (vector<int> &arr) {
    int frequency = 0, candidate = 0, n = arr.size();

    // Phase 1: Candidate Selection
    for (int i = 0; i < n; i++) {
        if (frequency == 0) {
            candidate = arr[i];
        }
        if (candidate == arr[i]) {
            frequency++;
        } else {
            frequency--;
        }
    }

    // Phase 2: Verification
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    if (count <= n / 2) {
        return -1;   // No majority element
    }
    return candidate; // Majority element
}
```

## 📝 Algorithm Steps

The algorithm works in two phases:

### Phase 1: Candidate Selection
1. Initialize `frequency = 0` and `candidate = 0`.
2. Traverse the array:
   - If `frequency == 0`, set `candidate = current element`.
   - If the current element equals `candidate`, increment `frequency`.
   - Otherwise, decrement `frequency`.
3. After this phase, `candidate` will hold the potential majority element.

### Phase 2: Verification
1. Set `count = 0`.
2. Traverse the array again and count the occurrences of `candidate`.
3. If `count > n/2`, return `candidate` as the majority element.
4. Otherwise, return `-1` (no majority element exists).

## 🚀 Features
- Finds the majority element in **O(n)** time complexity.
- Uses only **O(1)** space.
- Works efficiently for large datasets.
- Simple to implement and understand.


## ⏱️ Complexity
- **Time Complexity:** O(n)  
- **Space Complexity:** O(1)


### [📌 See The Full Code](moores_voting_algorithm.cpp/)

## Practice Problem

- ### [Majority Element](https://www.geeksforgeeks.org/problems/majority-element-1587115620/1)

- ### [Majority Element - More Than n/3](https://www.geeksforgeeks.org/problems/majority-vote/1)