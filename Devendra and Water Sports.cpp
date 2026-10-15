#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int z, y, a, b, c;
        cin >> z >> y >> a >> b >> c;
        if (z - y >= a + b + c) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
