#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    // Read and ignore the coordinates since they don't affect the final XOR sum
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
    }
    
    // The answer is simply the XOR sum of numbers from 1 to N
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans ^= i;
    }
    
    cout << ans << "\n";
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
