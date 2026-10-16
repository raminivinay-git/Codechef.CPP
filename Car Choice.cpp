#include <iostream>
using namespace std;

void solve() {
    double x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    
    double cost1 = y1 / x1;
    double cost2 = y2 / x2;
    
    if (cost1 < cost2) {
        cout << -1 << "\n";
    } else if (cost1 > cost2) {
        cout << 1 << "\n";
    } else {
        cout << 0 << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
