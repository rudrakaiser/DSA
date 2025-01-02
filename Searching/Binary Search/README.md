# **[Code](https://github.com/rudra-404/DSA/blob/main/Searching/Binary%20Search/binary_search.cpp) Explanation**


### **১. `binarySearch()` ফাংশন**
```cpp
int binarySearch(const vector<int>& arr, int key) {
    int left = 0;                // Starting index
    int right = arr.size() - 1;  // Ending index
```

#### **`left` এবং `right` :**  
  - Searching Range এর শুরু (starting index) এবং শেষ (ending index) নির্দেশ করে ।  
  - একদম শুরুতে, `left = 0` এবং `right = arr.size() - 1` সেট করা হয় ।  

```cpp
    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate the middle index to avoid overflow
```

#### **`while (left <= right)` :**  
  - সার্চ লুপটি চলতে থাকবে যতক্ষণ না `left` এবং `right` ক্রস করে যায় (অর্থা `right > left` না হয়) ।
  - এর মানে হলো, যতক্ষণ অ্যারেতে সার্চ করার মতো উপাদান আছে ততক্ষণ Searching চলবে ।

#### **`mid` এর হিসাব :**  
- **`mid = left + (right - left) / 2;`** যা, অ্যারের মাঝখানের ইন্ডেক্স নির্ধারণ করে ।  
- এই ফর্মুলা ব্যবহার করা হয় যাতে বড় ইন্টিজার ভ্যালুর ক্ষেত্রে **overflow** এড়ানো যায় ।

```cpp
        if (arr[mid] == key) { 
            return mid;          // If the key is found, return its index
        }
```

#### **Checking `mid` Element :**  
  - যদি **`arr[mid]`** এর মান `key` এর সমান হয়, তাহলে **mid** ইন্ডেক্স রিটার্ন করা হয় ।  
  - অর্থাৎ, `key` পাওয়া গেছে ।

```cpp
        else if (arr[mid] < key) {
            left = mid + 1;      // If key is greater, ignore the left half
        }
```

#### **`arr[mid] < key` :**  
  - যদি মাঝখানের উপাদানটি `key` থেকে ছোট হয়, তাহলে সার্চ Range এর বাম দিক বাদ দেওয়া হয় ।  
  - অর্থাৎ **`left = mid + 1;`** করে নতুন সার্চ Range শুরু হয় ।

```cpp
        else {
            right = mid - 1;     // If key is smaller, ignore the right half
        }
    }
```

#### **`arr[mid] > key` :**  
  - যদি মাঝখানের উপাদানটি `key` থেকে বড় হয়, তাহলে সার্চ Range এর ডান দিক বাদ দেওয়া হয় ।  
  - অর্থাৎ **`right = mid - 1;`** করে নতুন সার্চ Range নির্ধারণ করা হয় ।

```cpp
    return -1; // Return -1 if the key is not found
}
```

#### **`key` না পাওয়া গেলে :**  
  - যদি লুপ শেষ হয়ে যায় এবং কী পাওয়া না যায়, তাহলে **`-1`** রিটার্ন করা হয় ।  

---

### **`main` ফাংশন :**
```cpp
vector<int> arr = {50, 20, 30, 10, 40};
int key;

// Sorting the array (Binary Search works on sorted arrays)
sort(arr.begin(), arr.end());
```

#### **অ্যারেটি তৈরি :**  
  - এখানে একটি vector `arr` declare করা হয়েছে ।  
  - বাইনারি সার্চ ব্যবহার করতে হলে অ্যারেটি অবশ্যই **sorted** (সাজানো) হতে হবে ।  
  - তাই **`sort()`** ফাংশন ব্যবহার করে এটি ascending order এ সাজানো হয়েছে ।  

```cpp
cout << "Enter the number to search: ";
cin >> key;
```

#### **Input `key` :**  
  - ব্যবহারকারীকে একটি সংখ্যা ইনপুট দিতে বলা হয়েছে যা অ্যারেতে সার্চ করা হবে ।

```cpp
int result = binarySearch(arr, key); // Call the binarySearch function
```

#### **`binarySearch()` ফাংশন call করা :**  
  - এই ফাংশনটি ইনপুট অ্যারে এবং `key` নিয়ে কাজ শুরু করে এবং সার্চের ফলাফল **result** ভেরিয়েবলে store করে ।

```cpp
if (result != -1) {
    cout << "Element found at index: " << result << endl;
} else {
    cout << "Element not found in the array." << endl;
}
```

#### **Checking :**  
  - যদি **result != -1** হয়, তাহলে `key` এর অবস্থান (index) প্রিন্ট করা হয় ।
  - যদি **result == -1** হয়, তাহলে প্রিন্ট করা হয় যে `key` পাওয়া যায়নি ।

---

### **Input & Output Example (1)**

#### INPUT
```
Enter the number to search: 30
```

#### Sorted Array
```
10 20 30 40 50
```

#### OUTPUT
```
Element found at index: 2
```

---

### **Input & Output Example (2)**

#### INPUT
```
Enter the number to search: 60
```

#### Sorted Array
```
10 20 30 40 50
```

#### OUTPUT
```
Element not found in the array.
```

---

### **Time & Space Complexity**

#### **Time Complexity :**
- **Best Case :** O(1) যদি `key` মাঝখানে থাকে ।  
- **Average / Worst Case :** O(log n), কারণ প্রতিটি ধাপে সার্চ Range অর্ধেক হয়ে যায় ।

#### **Space Complexity :**  
- O(1) কারণ এটি কোনো অতিরিক্ত মেমোরি ব্যবহার করে না ।