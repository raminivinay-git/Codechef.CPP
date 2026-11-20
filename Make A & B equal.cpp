#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    static long long a[100005], b[100005];
    while (t--) {
        int n;
        cin >> n;
        long long sumA = 0, sumB = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sumA += a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            sumB += b[i];
        }
        if (sumA != sumB) {
            cout << -1 << "\n";
        } else {
            long long ops = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] < b[i]) {
                    ops += b[i] - a[i];
                }
            }
            cout << ops << "\n";
        }
    }
    return 0;
}
