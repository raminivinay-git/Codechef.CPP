#include <bits/stdc++.h>
using namespace std;

long long dist(long long r1, long long c1, long long r2, long long c2) {
    return max(abs(r1 - r2), abs(c1 - c2));
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m, r, c;
        cin >> n >> m >> r >> c;

        long long cr[4] = {1, 1, n, n};
        long long cc[4] = {1, m, 1, m};
        int p[4] = {0, 1, 2, 3};

        long long ans = LLONG_MAX;
        do {
            long long cur = dist(r, c, cr[p[0]], cc[p[0]]);
            for (int i = 0; i < 3; i++) {
                cur += dist(cr[p[i]], cc[p[i]], cr[p[i + 1]], cc[p[i + 1]]);
            }
            if (cur < ans) ans = cur;
        } while (next_permutation(p, p + 4));

        cout << ans << "\n";
    }
    return 0;
}
