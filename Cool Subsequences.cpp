#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int min_val = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        min_val = min(min_val, a[i]);
    }

    
    map<int, int> freq;
    for (int x : a) freq[x]++;

    for (auto& [val, count] : freq) {
        if (count >= 2) {
            cout << 1 << "\n";
            cout << val << "\n";
            return;
        }
    }

    cout << -1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
