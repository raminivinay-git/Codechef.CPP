#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        if (b > a) {
            if (a + x >= b) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            if (a - y <= b) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
