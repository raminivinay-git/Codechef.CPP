#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n, k;
        cin >> m >> n >> k;
        if (n * k < m) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
