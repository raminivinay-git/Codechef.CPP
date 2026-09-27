#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int best_car = 1;
        long long max_d = 0;
        long long max_t = 1;

        for (int i = 1; i <= n; i++) {
            long long d, time_val;
            cin >> d >> time_val;
            if (d * max_t > max_d * time_val) {
                max_d = d;
                max_t = time_val;
                best_car = i;
            }
        }
        cout << best_car << "\n";
    }
    return 0;
}
