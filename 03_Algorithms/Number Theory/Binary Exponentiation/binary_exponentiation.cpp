#include <iostream>
using namespace std;

int main () {
    int base, power, result = 1;
    cin >> base >> power;

    while (power) {
        if (power & 1) {
            result = result * base;
            power = power - 1;
        } else {
            base = base * base;
            power = power / 2;
        }
    }

    cout << result << endl;

    return 0;
}