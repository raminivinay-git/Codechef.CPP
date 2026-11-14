#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    
    bool valid = true;
    for (int i = 0; i < n; ++i) {
        if (s[i] == "cookie") {
            if (i == n - 1 || s[i + 1] != "milk") {
                valid = false;
                break;
            }
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
