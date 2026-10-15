#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1 || n == 3 || n == 5) {
            cout << "NO\n";
        } else if (n % 2 == 0) {
            cout << "YES\n";
        } else {
            if ((n - 7) % 2 == 0 && (n - 7) >= 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
