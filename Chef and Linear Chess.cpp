#include <iostream>

using namespace std;

int p[1005];

void solve() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    
    int ans = -1;
    
    for (int i = 0; i < n; ++i) {
        if (k % p[i] == 0) {
            if (p[i] > ans) {
                ans = p[i];
            }
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
