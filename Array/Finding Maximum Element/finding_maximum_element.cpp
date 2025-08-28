#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Array Size (1D Array) : ";
    cin >> n;

    int arr[n];
    cout << "Enter All The Array Element : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maximum, maxPos, minimum, minPos;
    maximum = minimum = arr[0];
    maxPos = minPos = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
            maxPos = i;
        }
        if (arr[i] < minimum) {
            minimum = arr[i];
            minPos = i;
        }
    }

    cout << "Maximum Element : " << maximum << endl;
    cout << "Max Element Position : " << maxPos << endl;
    cout << "Minimum Element : " << maximum << endl;
    cout << "Mim Element Position : " << minPos << endl;

    return 0;
}