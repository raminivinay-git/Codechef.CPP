#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        string s;
        cin >> s;

        int totalDays = 0;
        int currentStreak = 0;
        int maxStreak = 0;

        for (int i = 0; i < 30; i++) {
            if (s[i] == '1') {
                totalDays++;
                currentStreak++;
                if (currentStreak > maxStreak) {
                    maxStreak = currentStreak;
                }
            } else {
                currentStreak = 0;
            }
        }

        int salary = (totalDays * x) + (maxStreak * y);
        cout << salary << "\n";
    }
    return 0;
}
