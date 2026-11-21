#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long minArea = LLONG_MAX;
    long long maxArea = -1;
    int minIdx = 1;
    int maxIdx = 1;

    for (int i = 1; i <= n; i++) {
        long long x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        long long area2 = abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

        if (area2 <= minArea) {
            minArea = area2;
            minIdx = i;
        }
        if (area2 >= maxArea) {
            maxArea = area2;
            maxIdx = i;
        }
    }

    cout << minIdx << " " << maxIdx << "\n";
    return 0;
}
