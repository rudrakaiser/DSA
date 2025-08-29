#include <iostream>
#include <vector>
using namespace std;

int main () {
    // this is a sample VECTOR ARRAY
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int maxSubarraySum = INT32_MIN;

    for (int start = 0; start < arr.size(); start++) {
        for (int end = start;  end < arr.size(); end++) {
            int sum = 0;
            for (int i = start; i <= end; i++)  {
                sum += arr[i];
            }
            maxSubarraySum  = max(maxSubarraySum, sum);
        }
    }

    cout << "Max Subarray Sum: " << maxSubarraySum << endl;

    return 0;
}