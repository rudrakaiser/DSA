#include <iostream>
using namespace std;

// Pass by value: changes do NOT affect original variable
void changeA_passByValue(int num) {
    num = 100;  // only changes local copy
}

// Pass by reference (using &): changes affect original variable
void changeA_passByReference_reference(int &num) {
    num = 100;  // modifies original variable
}

// Pass by reference (using pointer *): changes affect original variable
void changeA_passByReference_pointer(int* num) {
    *num = 500;  // dereference pointer to modify original variable
}

int main () {
    int a = 37;

    cout << "Original a = " << a << endl;

    changeA_passByValue(a);
    cout << "After pass by value a = " << a << endl;  // unchanged
    
    changeA_passByReference_reference(a);
    cout << "After pass by reference (reference) a = " << a << endl;  // 100

    changeA_passByReference_pointer(&a);
    cout << "After pass by reference (pointer) a = " << a << endl;    // 500

    return 0;
}