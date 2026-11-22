#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        char a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool flipped = false;
        for (int i = n - 1; i >= n - k; i--) {
            if ((a[i] == 'H' && !flipped) || (a[i] == 'T' && flipped)) {
                flipped = !flipped;
            }
        }
        int ans = 0;
        for (int i = 0; i < n - k; i++) {
            if ((a[i] == 'H' && !flipped) || (a[i] == 'T' && flipped)) {
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
