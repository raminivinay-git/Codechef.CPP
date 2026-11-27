#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    const long long MOD = 998244353;
    static long long a[200005];

    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        long long ans = 1;
        for (int i = 0; i < n; i++) {
            if (a[i] - i <= 0) {
                ans = 0;
                break;
            }
            ans = (ans * ((a[i] - i) % MOD)) % MOD;
        }

        cout << ans << "\n";
    }

    return 0;
}
