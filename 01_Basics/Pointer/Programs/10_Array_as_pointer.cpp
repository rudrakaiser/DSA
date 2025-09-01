/*
    Array and Pointer Behavior:

    1. In C++, the name of an array acts as a pointer to its first element.
    2. Printing 'arr' gives the base address of the array.
    3. Dereferencing '*arr' gives the value of the first element.
    4. This is the foundation of pointer-array relationship in C++.
*/

#include <iostream>
using namespace std;

int main () {
    int arr[] = {10, 20, 30, 40, 50};

    cout << "Base address of array arr = " << arr << endl; // prints address of arr[0]
    cout << "Value of first element    = " << *arr << endl; // prints arr[0] → 10

    return 0;
}
