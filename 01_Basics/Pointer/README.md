## 🔹 What is a Pointer?

A **pointer** is a special type of variable in C/C++ that **stores the memory address** of another variable.
Instead of holding a direct value (like `int x = 10;`), a pointer holds the *location in memory* where that value is stored.


## 🔹 Basic Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;       // normal integer variable
    int* p = &x;      // pointer storing the address of x

    cout << "Value of x: " << x << endl;       // 10
    cout << "Address of x: " << &x << endl;    // e.g. 0x61ff08
    cout << "Value of p: " << p << endl;       // same address (0x61ff08)
    cout << "Value stored at p: " << *p << endl; // dereferencing → 10
    return 0;
}
```

### Output (example):

```
Value of x: 10
Address of x: 0x61ff08
Value of p: 0x61ff08
Value stored at p: 10
```

---

## 🔹 Key Points

1. **Declaration**

   ```cpp
   int* p;   // p is a pointer to an int
   char* c;  // c is a pointer to a char
   ```
2. **Initialization**

   ```cpp
   int a = 5;
   int* p = &a;  // &a = address of a
   ```
3. **Dereferencing**

   ```cpp
   cout << *p;   // gives the value at that memory location
   ```

## Pointer & Array (My Practice) Program List

- ### [Print Variable Address]()
- ### [Address and Dereference]()
- ### [Declare and Initialize Pointer]()
- ### [Pointer Value and Address]()
- ### [Modify Variable Using Pointer]()
- ### [Pointer to Pointer]()
- ### [Triple Pointer]()
- ### [Null and Uninitialized Pointer]()
- ### [Function Pass by Value and Reference]()
- ### [Array as Pointer]()
- ### [Pointer Arithmetic with Array]()
- ### [Pointer Increment and Arithmetic]()
