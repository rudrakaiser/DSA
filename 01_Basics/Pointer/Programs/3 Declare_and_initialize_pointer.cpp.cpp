#include <iostream>
using namespace std;

int main () {
    // An integer variable 'a'
    int a = 100;

    /*
        To store address of an integer variable,
        we need to create an integer pointer.
    */

    // Declaration
    int* ptr;

    /*
        Now we will store the address of integer variable 'a'
        into the pointer 'ptr'
    */

    // Initialization
    ptr = &a;

    // Printing 'ptr'
    cout << ptr << endl;

    // Checking '&a' and 'ptr' same or not
    cout << "a   = " << &a << endl;
    cout << "ptr = " << ptr << endl;

    return 0;
}