#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[105];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int min_len = 1e9;
    for (int i = 0; i < n; i++) {
        set<int> s;
        for (int j = i; j < n; j++) {
            s.insert(a[j]);
            if (s.size() == 2) {
                min_len = min(min_len, j - i + 1);
            } else if (s.size() > 2) {
                break;
            }
        }
    }
    
    if (min_len > n) {
        cout << -1 << "\n";
    } else {
        cout << min_len << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
