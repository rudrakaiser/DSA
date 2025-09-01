/*
    Pointer Arithmetic with Arrays:

    1. The name of an array acts as a pointer to its first element.
    2. 'arr + i' gives the address of the i-th element.
    3. '*(arr + i)' dereferences that address to get the value.
    4. This demonstrates accessing array elements using pointers.
*/

#include <iostream>
using namespace std;

int main () {
    int arr[] = {10, 20, 30, 40, 50};

    cout << *(arr + 0) << endl; // arr[0] → 10
    cout << *(arr + 1) << endl; // arr[1] → 20
    cout << *(arr + 2) << endl; // arr[2] → 30
    cout << *(arr + 3) << endl; // arr[3] → 40
    cout << *(arr + 4) << endl; // arr[4] → 50

    return 0;
}