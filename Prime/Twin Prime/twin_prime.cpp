#include<iostream>
using namespace std;

bool PrimeChecking(int n) {
    if (n < 2 || (n > 2 && n % 2 == 0)) {
        return false;
    } else {
        for (int i = 3; i * i <= n; i += 2) {
            if ( n % i == 0 ) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    cout << "Checking Twing Prime" << endl;
    int number;
    cout << "Enter A Prime Number >>> ";
    cin >> number;
    if ( PrimeChecking(number) == false ) {
        cout << "The number you entered is not a Prime Number" << endl;
    } else {
        if ( PrimeChecking(number+2) == true ) {
            cout << "Twin prime >>> " << number+2 << endl;
        } else if ( PrimeChecking(number-2) == true ) {
            cout << "Twin prime >>> " << number-2 << endl;
        } else {
            cout << "There is no Twin Prime of " << number << endl;
        }
    }
    return 0;
}