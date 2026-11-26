#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        long long n = x + 4;
        bool ok = false;
        for (long long d = 3; d * d <= n; d++) {
            if (n % d == 0) {
                ok = true;
                break;
            }
        }
        if (ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
