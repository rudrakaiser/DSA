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

- ### [Print Variable Address](https://github.com/rudrakaiser/DSA/blob/main/01_Basics/Pointer/Programs/a_-_Print_variable_address.cpp)
- ### [Address and Dereference](https://github.com/rudrakaiser/DSA/blob/main/01_Basics/Pointer/Programs/b_-_Address_and_dereference.cpp)
- ### [Declare and Initialize Pointer](https://github.com/rudrakaiser/DSA/blob/main/01_Basics/Pointer/Programs/c_-_Declare_and_initialize_pointer.cpp.cpp)
- ### [Pointer Value and Address](https://github.com/rudrakaiser/DSA/blob/main/01_Basics/Pointer/Programs/d_-_Pointer_value_and_address.cpp)
- ### [Modify Variable Using Pointer](https://github.com/rudrakaiser/DSA/blob/main/01_Basics/Pointer/Programs/e_-_Modify_variable_using_pointer.cpp)
- ### [Pointer to Pointer](https://github.com/rudrakaiser/DSA/blob/main/01_Basics/Pointer/Programs/f_-_Pointer_to_pointer.cpp)
- ### [Triple Pointer](https://github.com/rudrakaiser/DSA/blob/main/01_Basics/Pointer/Programs/g_-_Triple_pointer.cpp)
- ### [Null and Uninitialized Pointer](https://github.com/rudrakaiser/DSA/blob/main/01_Basics/Pointer/Programs/h_-_Null_pointer.cpp)
- ### [Function Pass by Value and Reference](https://github.com/rudrakaiser/DSA/blob/main/01_Basics/Pointer/Programs/i_-_Pass_by_value_and_reference.cpp)
- ### [Array as Pointer](https://github.com/rudrakaiser/DSA/blob/main/01_Basics/Pointer/Programs/j_-_Array_as_pointer.cpp)
- ### [Pointer Arithmetic with Array](https://github.com/rudrakaiser/DSA/blob/main/01_Basics/Pointer/Programs/k_-_Pointer_arithmetic_with_array.cpp)
- ### [Pointer Increment and Arithmetic](https://github.com/rudrakaiser/DSA/blob/main/01_Basics/Pointer/Programs/l_-_Pointer_increment_and_arithmetic.cpp)
