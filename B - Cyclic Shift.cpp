#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max1 = -1; // Largest difference
    int max2 = -1; // Second largest difference

    for (int i = 0; i < n; i++) {
        // Use modulo to wrap around to the first element for the last pair
        int diff = abs(a[i] - a[(i + 1) % n]);
        
        // Update the top two maximum differences
        if (diff >= max1) {
            max2 = max1;
            max1 = diff;
        } else if (diff > max2) {
            max2 = diff;
        }
    }

    // The answer is the second largest difference
    cout << max2 << "\n";
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
