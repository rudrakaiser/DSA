#include <iostream>
#include <vector>

using namespace std;

// Optimized Bubble Sort Algorithm
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped; // Flag to check if any swaps were made in a pass

    // Outer loop for each pass
    for (int i = 0; i < n - 1; i++) {
        swapped = false; // Reset the flag at the start of each pass

        // Inner loop to compare adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements if they are in the wrong order
                swap(arr[j], arr[j + 1]);
                swapped = true; // Mark that a swap occurred
            }
        }

        // If no swaps occurred, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

// Utility function to print an array
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    // Example input array
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    cout << "Original array: \n";
    printArray(arr);

    // Perform bubble sort
    bubbleSort(arr);

    cout << "Sorted array: \n";
    printArray(arr);

    return 0;
}
