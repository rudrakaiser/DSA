#include<bits/stdc++.h>
using namespace std;

bool primality_test (int n) {
    if (n < 2) return false;
    else if (n <= 3) return true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    } return true;
}

int main () {
    int n;
    cin >> n;
    if ( primality_test(n) ) cout << "YES";
    else cout << "NO";
    return 0;
}