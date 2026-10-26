#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    
    int max_h = 0;
    int single_target_time = 0;
    
    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
        // Time for multi-target mode is the maximum health
        max_h = max(max_h, h);
        // Time for single-target mode uses ceiling division
        single_target_time += (h + x - 1) / x; 
    }
    
    cout << min(single_target_time, max_h) << "\n";
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
