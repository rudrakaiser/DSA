## [Code](https://github.com/rudra-404/DSA/blob/main/Sorting/Bubble%20Sort/bubble_sort.cpp) Explanation :

#### **Function - `bubbleSort()` :**
```cpp
void bubbleSort(vector<int>& arr) {
    int n = arr.size(); // অ্যারের দৈর্ঘ্য বের করা
    bool swapped; // একটি ফ্ল্যাগ যা ট্র্যাক করবে কোনও swap হয়েছে কিনা
```
- **`n = arr.size()`** : এখানে `n` হল অ্যারের দৈর্ঘ্য ।
- **`swapped`** : একটি **Flag Variable**, যা প্রতিটি Phase এর সময় চেক করবে কোনো swapping হয়েছে কিনা ।

---

#### **Outer Loop : প্রতিটি Phase এর জন্য**
```cpp
for (int i = 0; i < n - 1; i++) {
    swapped = false; // প্রতিটি Phase এর শুরুতে ফ্ল্যাগ রিসেট করা
```
- এখানে **`n - 1`** পর্যন্ত loop চলবে কারণ শেষ উপাদান সঠিক স্থানে থাকলে সেটি আর check করার দরকার নেই ।
- প্রতিবার **`swapped = false`** করা হয় । যদি কোনো swapping না হয়, তাহলে লুপ বন্ধ হয়ে যাবে কারণ, তখন Array টি Sorted আছে বুঝে নেওয়া হবে ।

---

#### **Inner Loop : Element গুলা পাশাপাশি compare & swap করা**
```cpp
for (int j = 0; j < n - i - 1; j++) {
    if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]); // বড় উপাদানকে ডানদিকে পাঠানো
        swapped = true; // flag সেট করে বোঝানো যে swapping হয়েছে
    }
}
```
- **`j < n - i - 1`** : ভেতরের লুপের range প্রতি phase এ একটি করে কমতে থাকে কারণ সবচেয়ে বড় element প্রতিবার শেষে চলে যায় এবং sorted হতে থাকে ।
- **`if (arr[j] > arr[j + 1])`** : যদি `arr[j]` বড় হয় `arr[j+1]` থেকে, তাহলে তাদের swap করানো হয় ।
- **`swap(arr[j], arr[j + 1])`** : এখানে C++ এর বিল্ট-ইন `swap()` ফাংশন ব্যবহার করা হয়েছে উপাদানগুলো swap করতে ।
- **`swapped = true;`** : বোঝানো যে swapping হয়েছে ।

---

#### **Early Exit For Sorted Array :**
```cpp
if (!swapped) {
    break; // যদি কোনও swapping না হয় তবে বুঝে নিতে হবে যে, Array টি already sorted
}
```
- যদি কোনও swapping না হয়, তাহলে loop break করা হয় । এর ফলে extra loop চলানো এবং যাবতীয় checking and operations - avoid করা যায় ।

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
- Array টি Print করার জন্য একটি Function যা, প্রতিটি element একের পর এক console এ print করবে ।

---

#### **Main Function `main()` :**
```cpp
int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Original array: \n";
    printArray(arr);

    bubbleSort(arr); // Bubble Sort Function call করা

    cout << "Sorted array: \n";
    printArray(arr);

    return 0;
}
```
- **`arr`** : একটি Array যা sort করা হবে ।
- প্রিন্ট করার জন্য `printArray` ব্যবহার করা হয়েছে, এবং `bubbleSort` function call করে array টি sort করা হয়েছে ।

---

#### INPUT :
```
Original array: 
64 34 25 12 22 11 90
```

#### OUTPUT :
```
Sorted array: 
11 12 22 25 34 64 90
```

---

### Code Features :

1. **Optimized :** অপ্রয়োজনীয় phase এড়ানোর জন্য `swapped` flag ব্যবহার করা হয়েছে ।
2. **Time Complexity :**
   - **Best Case :** O(n), যদি Array আগে থেকেই sorted হয় ।
   - **Worst Case :**  O(n<sup>2</sup>) , যদি অ্যারে পুরোপুরি উল্টো থাকে ।
3. **Space Complexity :** O(1), কারণ এটি in-place কাজ করে (**in-place** : Array কে sort করার জন্যে অন্য আরেকটি Array নেওয়ার প্রয়োজন হয় না, input array এর মধ্যেই element গুলো swap করিয়ে array টি sort করা হয় । আর swap করার ক্ষেত্রে `temp` নামে একটি variable ব্যাবহার করা হয়ে থাকে `swap()` এ, যা খুবই অল্প মেমোরি নেয় ) ।