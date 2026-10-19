#include <iostream>

using namespace std;

void solve() {
    int g1, s1, b1, g2, s2, b2;
    cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
    
    int total1 = g1 + s1 + b1;
    int total2 = g2 + s2 + b2;
    
    if (total1 > total2) {
        cout << 1 << "\n";
    } else {
        cout << 2 << "\n";
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
