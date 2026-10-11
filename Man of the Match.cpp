#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int max_points = -1;
        int best_player = 0;
        for (int i = 1; i <= 22; i++) {
            int runs, wickets;
            cin >> runs >> wickets;
            int points = runs + wickets * 20;
            if (points > max_points) {
                max_points = points;
                best_player = i;
            }
        }
        cout << best_player << "\n";
    }
    return 0;
}
