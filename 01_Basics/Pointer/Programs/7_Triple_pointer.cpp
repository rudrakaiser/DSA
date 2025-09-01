#include <iostream>
using namespace std;

int main () {
    int a = 500;           // normal integer variable

    int* ptr1 = &a;        // pointer to int (a)
    int** ptr2 = &ptr1;    // pointer to pointer (ptr1)
    int*** ptr3 = &ptr2;   // pointer to pointer to pointer (ptr2)

    cout << ptr3 << endl;     // address of ptr2
    cout << *ptr3 << endl;    // value of ptr2 → address of ptr1
    cout << **ptr3 << endl;   // value of ptr1 → address of a
    cout << ***ptr3 << endl;  // value of a

    return 0;
}