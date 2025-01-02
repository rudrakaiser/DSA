## **[Code](https://github.com/rudra-404/DSA/blob/main/Searching/Linear%20Search/linear_search.cpp) Explanation**

### **`linearSearch()` ফাংশন :**
```cpp
int linearSearch(const vector<int>& arr, int key) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) { // Check if the current element matches the key
            return i; // Return the index if the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}
```
- এটি একটি `vector` এবং একটি `key` ইনপুট হিসেবে নেয় ।
- ফাংশনটি একটি লুপ চালিয়ে প্রতিটি element check করে যে, সেটি `key` এর সমান কিনা ।  
- **`if (arr[i] == key)`** : যদি কোনও উপাদান `key` এর সমান হয়, তখন এর ইনডেক্স `i` রিটার্ন করা হয় ।  
- **`return -1`** : যদি লুপ চালিয়ে `key` পাওয়া না যায়, তাহলে ফাংশন `-1` রিটার্ন করে ।

---

### **`main()` ফাংশন :**
```cpp
int main() {
    vector<int> arr = {10, 25, 30, 45, 50};
    int key;

    cout << "Enter the number to search: ";
    cin >> key;
```

#### **অ্যারেটি declare করা :**  
  - এখানে একটি vector **`arr`** ডিক্লেয়ার করা হয়েছে, যেখানে কিছু integer element store করা আছে: `{10, 25, 30, 45, 50}` ।  
#### **`key` ইনপুট নেওয়া :**  
  - **`cin >> key;`** অর্থাৎ user থেকে একটি integer value ইনপুট নেওয়া হয় `key` এর মধ্যে, যা পরবর্তীতে Array এর ভেতর সার্চ করা হবে ।  

```cpp
    int result = linearSearch(arr, key); // Call the linearSearch function
```

#### **`linearSearch()` ফাংশন call :**  
  - **`linearSearch(arr, key)`** এর মাধ্যমে সার্চ অপারেশন শুরু হয় এবং সার্চের ফলাফল **result** ভেরিয়েবলে স্টোর করা হয় ।  
  - যদি `key` পাওয়া যায়, তাহলে ফাংশন তার ইনডেক্স রিটার্ন করবে ।  
  - আর না পাওয়া গেলে, ফাংশনটি `-1` রিটার্ন করবে ।

```cpp
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
```

#### **Checking :**  
  - যদি **result != -1** হয়, তাহলে এর মানে `key` পাওয়া গেছে এবং এটি কোথায় (index) আছে তা প্রিন্ট করা হবে ।  
  - যদি **result == -1** হয়, তাহলে user কে জানানো হবে যে `key` অ্যারেতে পাওয়া যায়নি ।  

---

### **Input & Output Example (1)**

#### INPUT
```
Enter the number to search: 30
```

#### Process :
- প্রথম উপাদান `10` চেক করা হলো (মিলে না)।  
- দ্বিতীয় উপাদান `25` চেক করা হলো (মিলে না)।  
- তৃতীয় উপাদান `30` চেক করা হলো (মিলেছে)।  
- ফলাফল: **`Element found at index: 2`**

#### OUTPUT
```
Element found at index: 2
```

---

### **Input & Output Example (2)**

#### INPUT
```
Enter the number to search: 100
```

#### Process :
- সমস্ত উপাদান চেক করার পরেও **`100`** পাওয়া যায়নি।  
- ফলাফল: **`Element not found in the array.`**

#### OUTPUT
```
Element not found in the array.
```

---

### **Time & Space Complexity**

#### **Time Complexity:**
- **Best Case :**  
  - O(1) যদি `key` প্রথম উপাদানেই পাওয়া যায় ।  
- **Worst Case :**  
  - O(n) যদি `key` অ্যারেতে না থাকে বা শেষ উপাদানে থাকে ।  

#### **Space Complexity:**
- O(1), কারণ এটি কোনো অতিরিক্ত ডেটা স্ট্রাকচার ব্যবহার করে না ।