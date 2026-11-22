#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    while (n--) {
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        int d1 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        int d2 = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);
        int d3 = (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1);
        if (d1 + d2 == d3 || d2 + d3 == d1 || d3 + d1 == d2) {
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}
