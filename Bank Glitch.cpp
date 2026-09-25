#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        int max_total = a + b;
        int max_trades = a / x;
        for (int k = 0; k <= max_trades; k++) {
            int current_a = a - k * x;
            int current_b = b + k * y;
            int total = current_a + current_b;
            if (total > max_total) {
                max_total = total;
            }
        }
        cout << max_total << "\n";
    }
    return 0;
}
