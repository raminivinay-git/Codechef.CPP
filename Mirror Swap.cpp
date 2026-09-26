#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[205];
        for (int i = 1; i <= 2 * n; i++) {
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            int mirror = 2 * n + 1 - i;
            if (a[i] > a[mirror]) {
                sum += a[i];
            } else {
                sum += a[mirror];
            }
        }
        cout << sum << "\n";
    }
    return 0;
}
