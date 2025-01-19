#include <iostream>
using namespace std;
int main() {
    cout << "Checking An Integer Number Is A Prime Number Or Not" << endl;
    int number;
    cout << "Enter an Integer Number >>> ";
    cin >> number;
    bool isPrime = true;
    if (number > 2 && number%2 == 0) {
        isPrime = false;
    } else {
        for (int i=3; i*i <= number; i+=2) {
            if (number%i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime) {
        cout << number << " is a Prime Number" << endl;
    } else {
        cout << number << " is NOT a Prime Number" << endl;
    }
    return 0;
}