#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (((n - 1) & i) == i) {
            ans ^= a;
        }
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
