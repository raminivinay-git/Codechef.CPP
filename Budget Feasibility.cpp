#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        if (x >= 30 * y) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
