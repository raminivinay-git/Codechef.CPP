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

    // Sort the array to use the two-pointer technique
    sort(a.begin(), a.end());

    int left = 0;
    int right = n - 1;
    
    while (left < right) {
        long long current_sum = a[left] + a[right];
        
        if (current_sum == k) {
            cout << "Yes\n";
            return;
        } else if (current_sum < k) {
            left++;  // We need a larger sum
        } else {
            right--; // We need a smaller sum
        }
    }
    
    cout << "No\n";
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
