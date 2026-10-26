#include <iostream>

using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;
    
    if (a == b || b >= 2 * a) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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
