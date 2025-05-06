/*
    >>>     N-th prime number finding
    >>>     All prime numbers from 1 to N 
*/

#include <bits/stdc++.h>
using namespace std;

int MAX = 10000000;
vector<int> primes;

void sieve() {
    vector<bool> arr(MAX + 1, true);
    arr[0] = arr[1] = false;
    for (int i = 2; i * i <= MAX; i++) {
        if (arr[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                arr[j] = false;
            }
        }
    }
    for (int i = 2; i <= MAX; i++) {
        if (arr[i]) {
            primes.push_back(i);
        }
    }
}

int main() {
    sieve();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << primes[i] << ' ';
    }
    return 0;
}