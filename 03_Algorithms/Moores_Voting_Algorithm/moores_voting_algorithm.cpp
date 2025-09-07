#include <iostream>
#include <vector>
using namespace std;

int moores_voting_algorithm (vector<int> &arr) {
    int frequency = 0, candidate = 0, n = arr.size();
    for (int i = 0; i < n; i++) {
        if (frequency == 0) {
            candidate = arr[i];
        }
        if (candidate == arr[i]) {
            frequency++;
        } else {
            frequency--;
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }
    if (count <= n / 2) {
        return -1;
    }
    return candidate;
}

void printing_array (vector<int> &arr) {
    int n = arr.size();
    cout << "Array = [ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != (n - 1)) {
            cout << ", ";
        }
    } cout << " ]" << endl;
}

int main () {
    vector<int> arr = {2, 2, 1, 1, 2, 2, 2};
    printing_array(arr);
    cout << "Majority Element : [ " << moores_voting_algorithm(arr) << " ]" << endl;
    return 0;
}