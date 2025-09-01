#include <iostream>
using namespace std;

int main () {
    int a = 500;

    // Address of 'a'
    cout << &a << endl;

    // Value that stored in address of 'a'
    cout << *(&a) << endl;

    return 0;
}