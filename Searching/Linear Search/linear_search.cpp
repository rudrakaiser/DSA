#include <iostream>
#include <vector>

using namespace std;

// Function to perform Linear Search
int linearSearch(const vector<int>& arr, int key) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) { // Check if the current element matches the key
            return i; // Return the index if the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    vector<int> arr = {10, 25, 30, 45, 50};
    int key;

    cout << "Enter the number to search: ";
    cin >> key;

    int result = linearSearch(arr, key); // Call the linearSearch function

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
