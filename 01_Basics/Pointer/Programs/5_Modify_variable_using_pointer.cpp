/*
    This program demonstrates how we can modify 
    the value of a variable using a pointer.

    Steps:
    1. Declare an integer variable 'a' and initialize it with 100.
    2. Create a pointer 'ptr' that stores the address of 'a'.
    3. Use dereferencing (*ptr) to update the value of 'a' to 200.
    4. Print the new value of 'a' to verify the change.
*/

#include <iostream>
using namespace std;

int main () {
    int a = 100;
    int *ptr = &a;
    *ptr = 200;
    cout << a << endl;  // 200
    return 0;
}