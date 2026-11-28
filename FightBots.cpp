#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;

        int ax = 0, ay = 0;
        bool win = false;

        for (int i = 1; i <= n; i++) {
            if (s[i - 1] == 'L') ax--;
            else if (s[i - 1] == 'R') ax++;
            else if (s[i - 1] == 'U') ay++;
            else if (s[i - 1] == 'D') ay--;

            int d = abs(ax - x) + abs(ay - y);
            if (d <= i && (i - d) % 2 == 0) {
                win = true;
                break;
            }
        }

        if (win) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
