#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = -1;
        for (int y = 0; y <= 24 && y <= n; y += 4) {
            if ((n - y) % 7 == 0) {
                ans = n - y;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
