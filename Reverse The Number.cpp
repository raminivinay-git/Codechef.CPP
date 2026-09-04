#include <bits/stdc++.h>

using namespace std;

int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        int last = n % 10;
        rev = (rev * 10) + last;
        n = n / 10;
    }
    return rev;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << reverse(n) << endl;
    }
    return 0;
}
