#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;
long long a[5005];
long long p2[5005];

int main() {
    p2[0] = 1;
    for (int i = 1; i <= 5000; i++) {
        p2[i] = (p2[i - 1] * 2) % MOD;
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        long long ans = 0;
        for (int i = 0; i < n; i++) {
            long long x = a[i] % MOD;
            ans = (ans + x * p2[n - 1]) % MOD;
            ans = (ans - x * p2[i] % MOD + MOD) % MOD;
        }

        for (int k = 1; k < n; k++) {
            int l = 0, r = k - 1;
            for (int idx = 0; idx < k; idx++) {
                long long vl = min(a[l], a[k] - a[l]);
                long long vr = min(a[r], a[k] - a[r]);
                long long val;
                if (vl <= vr) {
                    val = vl;
                    l++;
                } else {
                    val = vr;
                    r--;
                }
                ans = (ans + (val % MOD) * p2[idx]) % MOD;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
