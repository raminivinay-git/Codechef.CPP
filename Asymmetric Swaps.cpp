#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> c(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        cin >> c[i];
    }
    sort(c.begin(), c.end());
    
    long long min_diff = -1;
    for (int i = 0; i <= n; i++) {
        long long diff = c[i + n - 1] - c[i];
        if (min_diff == -1 || diff < min_diff) {
            min_diff = diff;
        }
    }
    cout << min_diff << "\n";
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
