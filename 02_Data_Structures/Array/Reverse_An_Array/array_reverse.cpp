#include <iostream>
using namespace std;

int main () {
    // taking Array Size from the user
    int n;
    cout << "Array Size : ";
    cin >> n;

    // taking all the elements of array in single line from the user
    int arr[n];
    cout << "Enter Array Elements : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // two pointer method ---> 'ptr_1 = array start' and 'ptr_2 = array end' pointing two variable
    int ptr_1 = 0, ptr_2 = n - 1;
    
    while (ptr_1 < ptr_2) {
        // swapping ---> using bitwise OR operator
        arr[ptr_1] = arr[ptr_1] ^ arr[ptr_2];
        arr[ptr_2] = arr[ptr_1] ^ arr[ptr_2];
        arr[ptr_1] = arr[ptr_1] ^ arr[ptr_2];
        
        ptr_1++;
        ptr_2--;
    }


    // Pringting the reversed array
    cout << "Reversed : [ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}