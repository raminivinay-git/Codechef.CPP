#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        long long prod = 1;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            prod = (prod * (x % k)) % k;
        }

        if (prod == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
