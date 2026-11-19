#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[105];
        int total = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];
        }
        int min_loss = (a[0] / 2) + (a[1] / 2);
        for (int i = 1; i + 1 < n; i++) {
            int loss = (a[i] / 2) + (a[i + 1] / 2);
            if (loss < min_loss) {
                min_loss = loss;
            }
        }
        cout << total - min_loss << "\n";
    }
    return 0;
}
