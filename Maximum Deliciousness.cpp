#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    static int a[200005];
    while (t--) {
        int n, k, l;
        cin >> n >> k >> l;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        long long total = 0;
        for (int i = l - 1; i < n; i += k) {
            total += a[i];
        }
        cout << total << "\n";
    }
    return 0;
}
