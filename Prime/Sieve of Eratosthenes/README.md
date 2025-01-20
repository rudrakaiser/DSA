## [Code](https://github.com/rudra-404/DSA/blob/main/Prime/Sieve%20of%20Eratosthenes/sieve_of_eratosthenes.cpp) Explanation :

এই প্রোগ্রামটি **Sieve of Eratosthenes** অ্যালগরিদম ব্যবহার করে ${1}$ থেকে ${n}$-এর মধ্যে যত প্রাইম নাম্বার আছে, সেগুলো খুঁজে বের করে । নিচে, কোডের প্রতিটি অংশ ধাপে ধাপে ব্যাখ্যা করা হয়েছে ।

---

#### **include এবং function definition**
```cpp
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
```
- **`#include <iostream>`** : ইনপুট ও আউটপুট ব্যবস্থাপনার জন্য ব্যবহার করা হয় ।
- **`#include <vector>`** : ডাইনামিক অ্যারে (যেমন প্রাইম নাম্বার সংরক্ষণ) ব্যবহারের জন্য ।
- **`#include <iomanip>`** : প্রাইম নাম্বার প্রিন্ট করার সময় ফরম্যাট, যেমন : 1, 2, 3 এভাবে প্রিন্ট না করে 01, 02, 03 এভাবে প্রিন্ট করার জন্য ।

---

#### **Sieve of Eratosthenes অ্যালগরিদম (প্রাইম বের করার জন্য)**

```cpp
void sieve_of_eratosthenes(int n, vector<int>& primes) {
    vector<bool> mark(n + 1, false); // প্রতিটি নাম্বার শুরুতে "প্রাইম" ধরে নেওয়া হয়
    for (int i = 2; i * i <= n; i++) { 
        if (!mark[i]) { // যদি নাম্বারটি এখনো প্রাইম থাকে
            for (int j = i * i; j <= n; j += i) { 
                mark[j] = true; // i-এর গুণিতক প্রাইম নয়, সেটি মার্ক করা
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (!mark[i]) { 
            primes.push_back(i); // যেগুলো প্রাইম সেগুলো লিস্টে যোগ করা
        }
    }
}
```

##### **লজিক :**
1. **মার্কিং ভেক্টর :** 
   - `vector<bool> mark(n + 1, false)` একটি ভেক্টর তৈরি করে, যা ধরে নেয় সব সংখ্যা প্রথমে প্রাইম ।
2. **প্রাইম ফিল্টারিং :** 
   - ${i = 2}$ থেকে শুরু করে ${\sqrt{n}}$-এর মধ্যে লুপ চালানো হয় ।
   - ${i}$-এর গুণিতক সংখ্যা ${i*i}$ থেকে ${n}$ পর্যন্ত "প্রাইম নয়" হিসাবে মার্ক করা হয় ।
3. **প্রাইম যোগ করা :** 
   - মার্ক করা হয়নি এমন সংখ্যা প্রাইম এবং `primes` ভেক্টরে সংরক্ষণ করা হয় ।

---

#### **প্রাইম নাম্বার গুলো প্রিন্ট করার ফাংশন**
```cpp
void print_primes(const vector<int>& primes) {
    for (int i = 0; i < primes.size(); i++) {
        cout << setw(2) << setfill('0') << primes[i] << " "; // এক ডিজিট হলে ০ যোগ করে
        if ((i + 1) % 10 == 0) { 
            cout << endl; // প্রতি ১০টি প্রাইম পর একটি নতুন লাইন
        }
    }
    cout << endl;
}
```

##### **লজিক :**
1. **`setw` এবং `setfill` :**
   - `setw(2)` বলে প্রতিটি প্রাইম ২ ডিজিটে প্রিন্ট করতে, আর `setfill('0')` দিয়ে এক ডিজিটের আগে শূন্য যোগ করা হয় (যেমন, `01`, `02`) ।
2. **লাইন ব্রেক :** 
   - প্রতি ১০টি প্রাইম নাম্বারের পর একটি নতুন লাইন যোগ করা হয়, যাতে আউটপুট পড়তে সহজ হয় ।

---

#### **`main` ফাংশন**
```cpp
int main() {
    cout << "---------| Sieve Of Eratosthenes |---------" << endl;
    cout << "This program finds all prime numbers between 1 and a number (N) you specify." << endl;
    int n;
    cout << "Enter the range (N) >>> ";
    cin >> n;
```

##### **লজিক :**
1. **ইউজার ইনপুট নেওয়া :**
   - ইউজারকে ${n}$-এর মান দিতে বলা হয়, যার মধ্যে প্রাইম খুঁজতে হবে ।

```cpp
    if (n < 2) {
        cout << "There are no prime numbers in the given range." << endl;
        return 0;
    }

    if (n > 10000000) {
        cout << "Range too large! Please enter a number less than 10 million." << endl;
        return 0;
    }
```

##### **লজিক :**
1. **ইনপুট চেক করা :**
   - ${n < 2}$ : ২-এর নিচে কোনো প্রাইম নেই ।
   - ${n > 10^7}$ : খুব বড় ${n}$ হলে প্রোগ্রামটি ক্র্যাশ করতে পারে, তাই সীমাবদ্ধতা যোগ করা হয়েছে ।

```cpp
    vector<int> primes;
    sieve_of_eratosthenes(n, primes);
    cout << "The prime numbers between 1 and " << n << " are :" << endl;
    print_primes(primes);

    return 0;
}
```

##### **লজিক :**
1. **অ্যালগরিদম কল করা :**
   - `sieve_of_eratosthenes` ফাংশনকে ${n}$ এবং প্রাইম ভেক্টরের রেফারেন্স দিয়ে কল করা হয় ।
2. **আউটপুট দেখানো :**
   - "১ থেকে ${n}$-এর মধ্যে প্রাইম নাম্বার" একটি সুশৃঙ্খল ফরম্যাটে প্রিন্ট করা হয় ।

---

### **Example :**
#### Input
```
Enter the range (N) >>> 20
```

#### Output
```
---------| Sieve Of Eratosthenes |---------
This program finds all prime numbers between 1 and a number (N) you specify.
Enter the range (N) >>> 20
The prime numbers between 1 and 20 are :
02 03 05 07 11 13 17 19 
```

---

### **Complexity**

- **Time Complexity :** ${O(n \log(\log(n)))}$

- **Space Complexity :** ${O(n)}$

---

### **Overview :**
1. **"Sieve of Eratosthenes"** একটি কার্যকরী অ্যালগরিদম যা প্রাইম নাম্বার বের করতে খুব দ্রুত কাজ করে ।
2. প্রোগ্রামটি সহজবোধ্য, ব্যবহারকারীর ইনপুট গ্রহণ করে এবং সেই অনুযায়ী প্রাইম বের করে ।
3. ফরম্যাটিংয়ের মাধ্যমে আউটপুট আরও সুন্দর ও পড়তে সহজ করা হয়েছে ।