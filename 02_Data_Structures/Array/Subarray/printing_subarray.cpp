#include <iostream>
#include <vector>
using namespace std;

int main () {
    // this is a sample VECTOR ARRAY
    vector<int> arr = {1, 2, 3, 4, 5};

    for (int start = 0; start < arr.size(); start++) {
        for (int end = start; end < arr.size(); end++) {
            // Now printing the elements between 'start' and 'end' inclusive
            for (int i = start; i <= end; i++) {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}