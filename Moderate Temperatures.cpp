#include <iostream>

#include <algorithm>

#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[105];
        int mx = INT_MIN, mn = INT_MAX;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);
        }
        if (mx == mn) {
            cout << 0 << "\n";
            continue;
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] != mx && a[i] != mn) {
                count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}
