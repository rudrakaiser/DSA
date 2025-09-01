/*
    Pointer Increment and Arithmetic with Arrays:

    1. Initialize a pointer to the first element of the array.
    2. Access elements using *(ptr + i) notation.
    3. Increment the pointer (ptr++) to move it to the next element.
    4. Demonstrates how pointer arithmetic changes the element being pointed to.
*/

#include <iostream>
using namespace std;

int main () {
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    
    int* ptr = arr;  // pointer to first element

    cout << *ptr << endl;           // arr[0] → 10
    cout << *(ptr + 3) << endl;     // arr[3] → 7
    cout << *(ptr + 6) << endl;     // arr[6] → 4
    
    ptr++;                          // move pointer to arr[1]
    
    cout << *(ptr + 6) << endl;     // arr[7] → 3

    return 0;
}