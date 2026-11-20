#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        int a[1000], b[1000];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        bool valid = true;
        for (int i = 0; i < n; i++) {
            int diff = b[i] - a[i];
            if (diff != x && diff != y) {
                valid = false;
                break;
            }
        }
        if (valid) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
