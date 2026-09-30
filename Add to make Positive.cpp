#include <iostream>
#include <numeric>

using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            sum += a;
        }
        if (sum >= 0) {
            cout << 0 << "\n";
        } else {
            long long x = (-sum + n - 1) / n;
            cout << x << "\n";
        }
    }
    return 0;
}
