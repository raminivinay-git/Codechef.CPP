#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        int ones = __builtin_popcount(a) + __builtin_popcount(b);
        int k;
        if (ones <= n) {
            k = ones;
        } else {
            k = 2 * n - ones;
        }
        int ans = 0;
        for (int i = 0; i < k; i++) {
            ans += (1 << (n - 1 - i));
        }
        cout << ans << "\n";
    }
    return 0;
}
