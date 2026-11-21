#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool hasZero = false;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0' || hasZero) {
                cout << "NO\n";
                hasZero = true;
            } else if (i == n - 1) {
                cout << "YES\n";
            } else {
                cout << "IDK\n";
            }
        }
    }
    return 0;
}
