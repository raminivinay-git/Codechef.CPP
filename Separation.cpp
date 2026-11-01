#include <iostream>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    
    bool has_small = false;
    bool has_large = false;
    bool has_eq = false;
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a < x) {
            has_small = true;
        } else if (a > x) {
            has_large = true;
        } else {
            has_eq = true;
        }
    }
    
    if (has_small && has_large && !has_eq) {
        cout << "No\n";
    } else {
        cout << "Yes\n";
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
