#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    long long c;
    cin >> n >> c;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    long long extra = 0;
    while (true) {
        long long current_c = c + extra;
        
        bool has_less = false;
        for (int i = 0; i < n; i++) {
            if (a[i] < current_c) {
                has_less = true;
                break;
            }
        }
        
        bool has_equal = false;
        for (int i = 0; i < n; i++) {
            if (a[i] == current_c) {
                has_equal = true;
                break;
            }
        }
        
        if (has_less && !has_equal) {
            cout << extra << "\n";
            return;
        }
        
        extra++;
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
