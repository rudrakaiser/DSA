#include <iostream>
using namespace std;

int main () {
    // An integer variable 'number'
    int number = 1037;

    // An pointer that stores the address of 'number'
    int *ptr = &number;

    // Observing
    cout << "Address of 'number'     = " << &number << endl;
    cout << "Address stored in 'ptr' = " << ptr << endl;
    cout << "Value at 'ptr'          = " << *ptr << endl;
    cout << "Value of 'number'       = " << number << endl;
    cout << "Address of 'ptr'        = " << &ptr << endl;

    return 0;
}