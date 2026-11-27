#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long a[5005];
        long long sum = 0;
        long long mx = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if (a[i] > mx) {
                mx = a[i];
            }
        }

        long long ans = sum - mx;
        for (int i = 0; i < n; i++) {
            long long new_max = max(mx, 2 * a[i]);
            long long score = (sum + a[i]) - new_max;
            if (score > ans) {
                ans = score;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
