#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ops = 0;
        bool skip = false;

        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            if (skip) {
                skip = false;
                continue;
            }
            if (x == i) {
                ops++;
                skip = true;
            }
        }

        cout << ops << "\n";
    }
    return 0;
}
