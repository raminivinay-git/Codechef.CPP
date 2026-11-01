#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    
    int c11 = 0;
    int c_diff = 0;
    
    for (int i = 0; i < n; ++i) {
        if (a[i] == '1' && b[i] == '1') {
            c11++;
        } else if (a[i] != b[i]) {
            c_diff++;
        }
    }
    
    if (c11 % 2 != 0 || c_diff > 0) {
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
