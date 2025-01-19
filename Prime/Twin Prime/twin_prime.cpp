#include<iostream>
using namespace std;

bool PrimeChecking(int n) {
    bool isPrime = true;
    if (n < 2 || (n > 2 && n%2 == 0)) {
        isPrime = false;
    } else {
        for (int i=3; i*i <= n; i+=2) {
            if (n%i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

int main() {
    cout << "Checking Twing Prime" << endl;
    int n;
    cout << "Enter A Prime Number >>> ";
    cin >> n;
    
    return 0;
}