#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    static int p[100005], q[100005];
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int ca = 0, cb = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == '1') {
                p[ca++] = i;
            }
            if (b[i] == '1') {
                q[cb++] = i;
            }
        }
        if (ca != cb) {
            cout << -1 << "\n";
        } else {
            int ans = 0;
            for (int i = 0; i < ca; i++) {
                if (p[i] != q[i]) {
                    ans++;
                }
            }
            cout << ans << "\n";
        }
    }
    return 0;
}
