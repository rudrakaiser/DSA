# **[Code](https://github.com/rudra-404/DSA/blob/main/Sorting/Insertion%20Sort/insertion_sort.cpp) Explanation :**

### **Purpose of the Code**
**Insertion Sort** is a straightforward sorting algorithm that gradually sorts an array. It assumes the first part of the array is sorted and inserts each subsequent element into its correct position in the sorted part of the array.

---

### **`insertionSort()` ফাংশন :**

```cpp
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];  // Select the element to be inserted
        int j = i - 1;
```

- **`n = arr.size();` :** অ্যারের মোট উপাদান সংখ্যা বের করে ।

- **`for (int i = 1; i < n; i++)` :** লুপটি অ্যারের প্রথম উপাদানটি সর্টেড ধরে নিয়ে, দ্বিতীয় উপাদান থেকে শুরু করে বাকি উপাদানগুলো সঠিক স্থানে বসানোর কাজ করে ।

- **`int key = arr[i];` :** `key` হলো বর্তমান উপাদান যেটি সর্টেড অংশে সঠিক স্থানে বসাতে হবে ।

- **`int j = i - 1;` :** `j` হলো সর্টেড অংশের শেষ element এর index ।

```cpp
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // Shift larger elements to the right
            j--;
        }
```

#### **`while (j >= 0 && arr[j] > key)` :**

  - লুপটি চলতে থাকবে যতক্ষণ :  
    1. **`j >= 0`**, অর্থাৎ সর্টেড অংশের মধ্যে থাকা ।  
    2. **`arr[j] > key`**, অর্থাৎ `key` এর চেয়ে বড় উপাদান পাওয়া ।

- **`arr[j + 1] = arr[j];` :** যদি `arr[j]` বড় হয়, তাহলে সেটিকে এক ধাপ ডানে সরিয়ে নেওয়া হয় ।

- **`j--;` :** `j`-কে কমিয়ে লুপে পরবর্তী উপাদান চেক করা হয় ।  

```cpp
        arr[j + 1] = key;  // Place the key in its correct position
    }
}
```

- **`arr[j + 1] = key;` :** লুপটি বন্ধ হওয়ার পর, `key`-কে সর্টেড অংশে সঠিক স্থানে বসানো হয় ।  

---

### **`main()` ফাংশন :**

```cpp
int n;
cout << "Enter the size of the array: ";
cin >> n;

vector<int> arr(n);
cout << "Enter the elements of the array: ";
for (int i = 0; i < n; i++) {
    cin >> arr[i];
}
```

- **`int n;` এবং `cin >> n;` :** ব্যবহারকারীর কাছ থেকে অ্যারের size (মোট উপাদানের সংখ্যা) ইনপুট নেয় ।  
- **`vector<int> arr(n);` :** একটি ভেক্টর `arr` declare করা হয় যার আকার `n` ।  
- **`for` লুপ :** ব্যবহারকারীর কাছ থেকে প্রতিটি উপাদান ইনপুট নেওয়ার জন্য ।

```cpp
insertionSort(arr);
```

- **`insertionSort(arr);` :** ইনপুট অ্যারেটি সর্ট করার জন্য `insertionSort` ফাংশন call করা হয় ।

```cpp
cout << "Sorted array: ";
for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
cout << endl;
```

- **`cout << "Sorted array: ";` :** সর্টেড অ্যারের প্রিন্ট আউটপুটের জন্য ।  
- **`for` লুপ :** সর্টেড অ্যারের প্রতিটি উপাদান প্রিন্ট করে ।  

---

### INPUT
```
Enter the size of the array: 5
Enter the elements of the array: 40 10 30 20 50
```

### OUTPUT
```
Sorted array: 10 20 30 40 50
```

---

### **Time & Space Complexity**

#### **Time Complexity :**
- **Best Case :** O(n) যখন অ্যারেটি ইতিমধ্যে সর্ট করা থাকে ।  
- **Average / Worst Case :** O(n<sup>2</sup>) যখন অ্যারেটি উল্টো সাজানো থাকে ।  

#### **Space Complexity :**  
- O(1) কারণ এটি কোনো অতিরিক্ত মেমোরি ব্যবহার করে না ।