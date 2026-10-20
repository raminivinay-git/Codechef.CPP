#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long m, n;
        cin >> m >> n;
        long long min_losses = m;
        for (long long wins = 0; wins <= m; wins++) {
            long long rem_points = n - wins * 3;
            if (rem_points < 0) break;
            long long ties = rem_points;
            long long losses = m - wins - ties;
            if (losses >= 0 && wins * 3 + ties == n) {
                if (losses < min_losses) {
                    min_losses = losses;
                }
            }
        }
        cout << min_losses << "\n";
    }
    return 0;
}
