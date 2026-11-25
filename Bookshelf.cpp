#include <bits/stdc++.h>
using namespace std;

int a[200005];
int f[200005];
int sb[200005];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int max_f = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            f[a[i]]++;
            if (f[a[i]] > max_f) {
                max_f = f[a[i]];
            }
        }

        if (max_f > (n + 1) / 2) {
            cout << -1 << "\n";
        } else {
            int m0 = 0;
            int last = -1;
            for (int i = 0; i < n; i++) {
                if (i == 0 || a[i] != a[i - 1]) {
                    sb[a[i]]++;
                    m0++;
                    last = a[i];
                }
            }

            int k0 = n - m0;
            int ans = k0;

            for (int x = 1; x <= n; x++) {
                int cnt = f[x] - sb[x];
                if (x == last) {
                    if (2 * cnt > ans) {
                        ans = 2 * cnt;
                    }
                } else {
                    if (2 * cnt - 1 > ans) {
                        ans = 2 * cnt - 1;
                    }
                }
            }

            cout << ans << "\n";
        }

        for (int i = 0; i < n; i++) {
            f[a[i]] = 0;
            sb[a[i]] = 0;
        }
    }
    return 0;
}
