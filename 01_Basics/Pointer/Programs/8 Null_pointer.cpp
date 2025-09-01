/*
    Pointer Garbage Value and NULL Explanation:

    1. Garbage Value:
        - When a pointer is declared but not initialized, it contains a random memory address.
        - Accessing or dereferencing it can lead to undefined behavior or crashes.

    2. NULL Pointer:
        - Assigning NULL (or nullptr in modern C++) makes the pointer point to nothing.
        - Safe practice to avoid accidental access to random memory.
*/

#include <iostream>
using namespace std;

int main () {
    int* ptr;               // uninitialized pointer → contains garbage value
    cout << ptr << endl;    // prints random address (garbage)
    ptr = nullptr;          // pointer now null (safe)
    cout << ptr << endl;    // prints 0 or nullptr
    return 0;
}