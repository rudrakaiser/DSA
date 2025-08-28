#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    
    for (int i = 2; i * i <= n; i++) {
        // int power_count = 0;
        while (n % i == 0) {
            n /= i;

            // power_count++;

            cout << i << ' ';
        }
        
        // cout << i << " ^ " << power_count << endl;
    }
    
    if (n > 1) {
        // cout << n << " ^ 1" << endl;

        cout << n << endl;
    }
    
    return 0;
}