#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    // Sort the array to form a monotonic sequence
    sort(a.begin(), a.end());
    
    for (int i = 1; i < n - 1; ++i) {
        long long d1 = a[i] - a[i - 1];
        long long d2 = a[i + 1] - a[i];
        
        // Check if one difference is exactly twice the other
        if (d1 != 2 * d2 && 2 * d1 != d2) {
            cout << "No\n";
            return;
        }
    }
    
    cout << "Yes\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
