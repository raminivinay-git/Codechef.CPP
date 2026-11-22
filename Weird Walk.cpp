#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        long long posA = 0, posB = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            if (posA == posB && a[i] == b[i]) {
                ans += a[i];
            }
            posA += a[i];
            posB += b[i];
        }
        cout << ans << "\n";
    }
    return 0;
}
