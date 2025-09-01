/*
    This program demonstrates the concept of 
    a pointer to a pointer (double pointer).

    - 'ptr1' is a pointer to integer 'a'
    - 'ptr2' is a pointer to 'ptr1'
    - Therefore, 'ptr2' indirectly points to 'a'
*/

#include <iostream>
using namespace std;

int main () {
    int a = 100;

    int* ptr1 = &a;
    int** ptr2 = &ptr1;

    cout << "Address of 'ptr1' = " << &ptr1 << endl;
    cout << "Value of 'ptr2'   = " << ptr2 << endl;

    return 0;
}