#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s, target;
        cin >> s >> target;
        int diff = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != target[i]) {
                diff++;
            }
        }
        if (diff % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
