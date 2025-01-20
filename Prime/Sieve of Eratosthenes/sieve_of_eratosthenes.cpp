#include <iostream>
#include <vector>
#include <iomanip> // For setw() and setfill()
using namespace std;

void sieve_of_eratosthenes(int n, vector<int>& primes) {
    vector<bool> mark(n + 1, false);
    for (int i = 2; i * i <= n; i++) {
        if (!mark[i]) {
            for (int j = i * i; j <= n; j += i) {
                mark[j] = true;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (!mark[i]) {
            primes.push_back(i);
        }
    }
}

void print_primes(const vector<int>& primes) {
    for (int i = 0; i < primes.size(); i++) {
        cout << setw(2) << setfill('0') << primes[i] << " ";
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }
    cout << endl;
}

int main() {
    cout << "---------| Sieve Of Eratosthenes |---------" << endl;
    cout << "This program finds all prime numbers between 1 and a number (N) you specify." << endl;
    int n;
    cout << "Enter the range (N) >>> ";
    cin >> n;

    if (n < 2) {
        cout << "There are no prime numbers in the given range." << endl;
        return 0;
    }

    if (n > 10000000) {
        cout << "Range too large! Please enter a number less than 10 million." << endl;
        return 0;
    }

    vector<int> primes;
    sieve_of_eratosthenes(n, primes);
    cout << "The prime numbers between 1 and " << n << " are:" << endl;
    print_primes(primes);

    return 0;
}
