#include <iostream>
using namespace std;

bool PrimeChecking(int n) {
    if (n < 2 || (n > 2 && n%2 == 0)) {
        return false;
    } else {
        for (int i=3; i*i <= n; i+=2) {
            if (n%i == 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    cout << "Checking An Integer Number Is A Prime Or Not" << endl;
    int number;
    cout << "Enter an Integer Number >>> ";
    cin >> number;
    if (PrimeChecking(number)) {
        cout << "Prime Number" << endl;
    } else {
        cout << "NOT a Prime Number" << endl;
    }
    return 0;
}