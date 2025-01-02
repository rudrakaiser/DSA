# **[Code](https://github.com/rudra-404/DSA/blob/main/Sorting/Selection%20Sort/selection_sort.cpp) Explanation :**

## **Function `selectionSort()` :**
```cpp
void selectionSort(vector<int>& arr) {
    int n = arr.size(); // অ্যারের size বের করা
```
- **`n = arr.size()`** : এখানে `n` হলো অ্যারের দৈর্ঘ্য । এটি দিয়ে বোঝানো হয় অ্যারেটিতে কয়টি উপাদান আছে ।

#### **Outer Loop : প্রতিটি ধাপে ছোটতম উপাদান খুঁজে বের করা**
```cpp
for (int i = 0; i < n - 1; i++) {
    int minIndex = i; // ধরি বর্তমান index-টাই সর্বনিম্ন
```
- **`i`** হলো অ্যারের প্রথম থেকে শেষ পর্যন্ত ক্রমান্বয়ে প্রতিটি element এর জন্য কাজ করে ।
- **`minIndex = i;`** : ধরে নেওয়া হয় যে বর্তমান ইনডেক্স `i`-এর element টাই সবচেয়ে ছোট ।

#### **Inner Loop : ছোটতম উপাদান খুঁজে বের করা**
```cpp
for (int j = i + 1; j < n; j++) {
    if (arr[j] < arr[minIndex]) {
        minIndex = j; // যদি ছোট উপাদান পাওয়া যায়, minIndex আপডেট করা
    }
}
```
- **`j = i + 1;`** : ভেতরের লুপ শুরু হয় বর্তমান ইনডেক্সের পরবর্তী উপাদান থেকে । কারণ বর্তমান ইনডেক্সটি ইতিমধ্যে ধরে নেওয়া হয়েছে ।
- **`arr[j] < arr[minIndex]`** : যদি `arr[j]`-এর উপাদান বর্তমান `minIndex`-এর উপাদানের চেয়ে ছোট হয়, তাহলে `minIndex` আপডেট করা হয় ।

#### **Swap : ছোট উপাদানটি সঠিক স্থানে আনা**
```cpp
if (minIndex != i) {
    swap(arr[i], arr[minIndex]);
}
```
- যদি সর্বনিম্ন উপাদানের ইনডেক্স `minIndex` এবং বর্তমান ইনডেক্স `i` একই না হয়, তাহলে built-in `swap()` function ব্যাবহার করে তাদের Swap করা হয় ।

---

#### **Function `printArray()` :**
```cpp
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}
```
- এই ফাংশন অ্যারের প্রতিটি উপাদান একের পর এক প্রিন্ট করে ।

---

#### **Main Function `main()` :**

```cpp
int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
```

- **`vector<int> arr = {64, 25, 12, 22, 11};`**  
  - এখানে একটি ভেক্টর `arr` তৈরি করা হয়েছে, যেখানে প্রাথমিকভাবে এলোমেলো করে কিছু উপদান নেওয়া আছে । এই উপাদান গুলোকে আমরা **Selection Sort** ব্যবহার করে সাজাব ।

```cpp
    cout << "Original array: \n";
    printArray(arr);
    selectionSort(arr);
```

- **`cout << "Original array: \n";`**  
  - এ লাইনে প্রাথমিক (unsorted) অ্যারের মানগুলো প্রিন্ট করার জন্য একটি message print করা হয়েছে ।  

- **`printArray(arr);`**  
  - এই লাইনটি প্রাথমিক অ্যারের উপাদানগুলো প্রিন্ট করার জন্য **printArray()** ফাংশনকে call করে এবং অ্যারের প্রতিটা উপাদান print করে ।

- **`selectionSort(arr);`**  
  - এখানে **selectionSort()** ফাংশনকে call করা হয়েছে, যা `arr` ভেক্টরটিকে সাজাবে ।  
  - এই ফাংশনের কাজ হলো উপাদানগুলোকে ক্রমানুসারে (ascending order) সাজানো ।

```cpp
    cout << "Sorted array: \n";
    printArray(arr);
```

- **`cout << "Sorted array: \n";`**  
  - এটি সাজানো (sorted) অ্যারের মানগুলো প্রিন্ট করার আগে একটি message print করে ।  

- **`printArray(arr);`**  
  - এই লাইনটি **printArray()** ফাংশনকে পুনরায় call করে এবং সাজানো অ্যারেকে print করে ।

---

#### INPUT :
```
Original array: 
64 25 12 22 11
```

#### ধাপে ধাপে কাজের প্রক্রিয়া:
1. **Phase 01 :**
   - `11` হলো সবচেয়ে ছোট উপাদান ।
   - `11` এবং `64` বিনিময় করা হয় ।
   - Array : `[11, 25, 12, 22, 64]`

2. **Phase 02 :**
   - `12` হলো সবচেয়ে ছোট উপাদান বাকি অংশে ।
   - `12` এবং `25` বিনিময় করা হয় ।
   - Array : `[11, 12, 25, 22, 64]`

3. **Phase 03 :**
   - `22` হলো সবচেয়ে ছোট উপাদান ।
   - `22` এবং `25` বিনিময় করা হয় ।
   - Array : `[11, 12, 22, 25, 64]`

4. **Phase 04 :**
   - বাকি অংশে উপাদানগুলো যথাস্থানে আছে । Swap এর প্রয়োজন নেই ।

**Note :** এখানে array এর `size` ছিলো `5` আর `phase` ছিলো `4` টা । অর্থাৎ `phase = size - 1` ।

#### OUTPUT :
```
Sorted array: 
11 12 22 25 64
```

---

### **Space Time Complexity :**

- **Time Complexity :**  
  - **Best**, **Average** & **Worst** case এর ক্ষেত্রে : **O(n<sup>2</sup>)**  
    কারণ Selection Sort-এ দুটি নেস্টেড লুপ ব্যবহার করা হয় । বাইরের লুপ n বার চলে এবং প্রতিবার ভেতরের লুপ চলার ফলে n−1, n−2, n-3 ... পর্যন্ত উপাদানগুলোর মধ্যে তুলনা করা হয় । তাই এটি Time Complexity তে n<sup>2</sup> সময় নেয় ।
  
- **Space Complexity :**  
  - O(1) কারণ Selection Sort একটি ইনপ্লেস (In-place) অ্যালগরিদম, যার ফলে এটি ইনপুট অ্যারেতেই কাজ করে এবং কোনও অতিরিক্ত ডেটা স্ট্রাকচার (যেমন, আরেকটি অ্যারে বা লিস্ট) ব্যবহার করে না ।