#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int target = 0;
        bool ok = true;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x != 0) {
                if (target == 0) {
                    target = x;
                } else if (x != target) {
                    ok = false;
                }
            }
        }
        if (ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
