#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    long long current_red = 0;
    long long current_blue = 0;
    
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            current_red += a[i];
            current_blue -= a[i];
        } else {
            current_red += a[i];
            current_blue -= a[i];
        }
    }
    
    long long min_red = 0;
    long long max_red = k;
    
    long long red = 0;
    long long blue = k;
    
    long long min_r = 0, max_r = k;
    
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            min_r = max(min_r, (long long)a[i]);
            max_r = min(max_r, k - a[i]);
        } else {
            long long need_blue = -a[i];
            min_r = max(min_r, k - (k - need_blue)); 
            // Wait, let's track net change:
        }
    }
    
    // Let's track the net change in red stones:
    // If we start with X red stones and K - X blue stones:
    // At step i, red changes by A[i].
    // Blue changes by -A[i].
    // So after prefix of trades, the change in red is prefix_sum(A).
    // At any point, red = X + prefix_sum(A) >= 0 => X >= -prefix_sum(A).
    // Also blue = (K - X) - prefix_sum(A) >= 0 => X <= K - prefix_sum(A).
    
    long long min_X = 0;
    long long max_X = k;
    
    long long pref = 0;
    for (int i = 0; i < n; i++) {
        pref += a[i];
        min_X = max(min_X, -pref);
        max_X = min(max_X, k - pref);
    }
    
    if (min_X <= max_X) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
