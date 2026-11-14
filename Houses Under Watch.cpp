#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int m, x, y;
    cin >> m >> x >> y;
    int reach = x * y;
    
    vector<int> a(m);
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
    }
    
    vector<bool> safe(101, true);
    for (int i = 0; i < m; ++i) {
        int left = max(1, a[i] - reach);
        int right = min(100, a[i] + reach);
        for (int j = left; j <= right; ++j) {
            safe[j] = false;
        }
    }
    
    int count = 0;
    for (int i = 1; i <= 100; ++i) {
        if (safe[i]) {
            count++;
        }
    }
    cout << count << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
