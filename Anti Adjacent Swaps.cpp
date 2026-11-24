#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[1005];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n == 1) {
            cout << "YES\n";
        } else if (n == 2) {
            if (a[0] <= a[1]) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else if (n == 3) {
            if ((a[0] <= a[1] && a[1] <= a[2]) || (a[2] <= a[1] && a[1] <= a[0])) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
