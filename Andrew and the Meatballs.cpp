#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long m;
        cin >> n >> m;
        long long p[n];
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        sort(p, p + n, greater<long long>());
        long long sum = 0;
        int ans = -1;
        for (int i = 0; i < n; i++) {
            sum += p[i];
            if (sum >= m) {
                ans = i + 1;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
