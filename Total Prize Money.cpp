#include <bits/stdc++.h>

using namespace std;

int TotalPrizeMoney(int x, int y) {
    return (10 * x) + (90 * y);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        cout << TotalPrizeMoney(x, y) << endl;
    }
    return 0;
}
