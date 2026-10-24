#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> cost(n);
    for (int i = 0; i < n; i++) {
        cin >> cost[i];
    }

    // Sort the costs in descending order
    sort(cost.rbegin(), cost.rend());

    long long total_cost = 0;
    
    // Process items in groups of 4
    for (int i = 0; i < n; i += 4) {
        // Pay for the first item in the group
        if (i < n) {
            total_cost += cost[i];
        }
        // Pay for the second item in the group
        if (i + 1 < n) {
            total_cost += cost[i + 1];
        }
        // The 3rd and 4th items (i + 2, i + 3) are free, so we just skip them
    }

    cout << total_cost << "\n";
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
