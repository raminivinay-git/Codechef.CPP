#include <iostream>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    
    bool valid = false;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a >= x) {
            valid = true;
        }
    }
    
    if (valid) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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
