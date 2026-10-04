#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int set_bits = __builtin_popcount(n);
        if (set_bits % 2 == 0) {
            cout << "EVEN\n";
        } else {
            cout << "ODD\n";
        }
    }
    return 0;
}
