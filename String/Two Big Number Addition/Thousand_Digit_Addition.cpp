#include <bits/stdc++.h>
using namespace std;
string add(string a, string b) {
    if (a.length() < b.length()) swap(a, b);
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string result = "";
    int carry = 0;
    for (int i = 0; i < a.length(); i++) {
        int digitA = a[i] - '0';
        int digitB = (i < b.length()) ? (b[i] - '0') : 0;
        int sum = digitA + digitB + carry;
        carry = sum / 10;
        result.push_back((sum % 10) + '0');
    }
    if (carry) result.push_back(carry + '0');
    reverse(result.begin(), result.end());
    return result;
}
int main() {
    string a, b;
    cout << "Large Addition of \'A\' and \'B\'\n";
    cout << "-----------------------------\n";
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;
    string sum = add(a, b);
    cout << ">>> " << sum << endl;
    return 0;
}