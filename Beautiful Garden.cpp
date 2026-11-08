#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, d;
    cin >> n >> k >> d;
    vector<int> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
    
    // If all flowers must be blooming, we can't pluck any
    if (k == n) {
        cout << 0 << "\n";
        return;
    }
    
    // Sort to easily pick the (N - K) fastest regrowing flowers
    sort(t.begin(), t.end());
    
    long long max_plucks = 0;
    for (int i = 0; i < n - k; i++) {
        max_plucks += 1 + (d - 1) / t[i];
    }
    
    cout << max_plucks << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
