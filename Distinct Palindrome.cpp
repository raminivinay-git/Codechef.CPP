#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        if (x > (n + 1) / 2) {
            cout << -1 << "\n";
        } else {
            string s(n, 'a');
            for (int i = 0; i < x; i++) {
                s[i] = 'a' + i;
                s[n - 1 - i] = 'a' + i;
            }
            cout << s << "\n";
        }
    }
    return 0;
}
