#include <iostream>
#include <vector>
#include <algorithm> // For sorting

using namespace std;

// Function to perform Binary Search
int binarySearch(const vector<int>& arr, int key) {
    int left = 0;                // Starting index
    int right = arr.size() - 1;  // Ending index

    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate the middle index to avoid overflow

        if (arr[mid] == key) { 
            return mid;          // If the key is found, return its index
        } else if (arr[mid] < key) {
            left = mid + 1;      // If key is greater, ignore the left half
        } else {
            right = mid - 1;     // If key is smaller, ignore the right half
        }
    }

    return -1; // Return -1 if the key is not found
}

int main() {
    vector<int> arr = {50, 20, 30, 10, 40};
    int key;

    // Sorting the array (Binary Search works on sorted arrays)
    sort(arr.begin(), arr.end());

    cout << "Enter the number to search: ";
    cin >> key;

    // Call the binarySearch function
    int result = binarySearch(arr, key);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
