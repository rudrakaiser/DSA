#include<iostream>
using namespace std;

bool primality_test (int n) {
    if (n == 2 || n == 3) {
        return true;
    } else if ((n & 1) == 0 || n < 2) {
        return false;
    } else {
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                return false;
            } 
        }
    }
    
    return true;
}

int main () {
    int test_case;
    cout << "How many numbers do you want to check >>> ";
    cin >> test_case;

    while (test_case--) {
        int num;
        cout << "Enter A Number >>> ";
        cin >> num;
        if (primality_test(num)) {
            cout << "PRIME NUMBER" << endl;
        } else {
            cout << "NOT PRIME NUMBER" << endl;
        }
    }

    return 0;
}