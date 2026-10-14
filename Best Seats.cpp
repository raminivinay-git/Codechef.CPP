#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int t;
    if (!(cin >> t)) return;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int minCost = a[0] + a[1];
        for (int i = 0; i < n - 1; i++) {
            minCost = min(minCost, a[i] + a[i + 1]);
        }
        cout << minCost << "\n";
    }
}

int main() {
    solve();
    return 0;
}
