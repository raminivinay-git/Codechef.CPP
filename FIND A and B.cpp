#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;

        if ((x * y) % z == 0) {
            cout << x * y << " " << z << "\n";
        } else if ((x * z) % y == 0) {
            cout << x * z << " " << y << "\n";
        } else if ((y * z) % x == 0) {
            cout << y * z << " " << x << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}
