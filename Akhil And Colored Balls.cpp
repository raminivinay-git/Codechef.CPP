#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        int n = x.length();
        for (int i = 0; i < n; i++) {
            if (x[i] == 'B' && y[i] == 'B') {
                cout << 'W';
            } else {
                cout << 'B';
            }
        }
        cout << "\n";
    }
    return 0;
}
