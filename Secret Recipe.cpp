#include <iostream>

using namespace std;

void solve() {
    double x1, x2, x3, v1, v2;
    cin >> x1 >> x2 >> x3 >> v1 >> v2;
    
    double t1 = (x3 - x1) / v1;
    double t2 = (x2 - x3) / v2;
    
    if (t1 < t2) {
        cout << "Chef\n";
    } else if (t2 < t1) {
        cout << "Kefa\n";
    } else {
        cout << "Draw\n";
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
