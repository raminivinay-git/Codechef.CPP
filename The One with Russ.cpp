#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void solve() {
    int n, x, k;
    cin >> n >> x >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    int match_count = 0;
    for (int i = 0; i < n; i++) {
        if (abs(a[i] - b[i]) <= k) {
            match_count++;
        }
    }
    
    if (match_count >= x) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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
