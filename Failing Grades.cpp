#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long sum = 0;
        bool ok = true;
        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            sum += a;
            if (sum < 40 * (i + 1)) {
                ok = false;
            }
        }
        if (ok) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
