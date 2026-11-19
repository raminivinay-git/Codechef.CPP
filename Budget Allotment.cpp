#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    static int a[100005];
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        long long surplus = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] >= x) {
                surplus += a[i] - x;
                ans++;
            } else {
                long long need = x - a[i];
                if (surplus >= need) {
                    surplus -= need;
                    ans++;
                } else {
                    break;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
