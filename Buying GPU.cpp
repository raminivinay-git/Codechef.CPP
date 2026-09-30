#include <iostream>

using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;

        if (z <= y) {
            cout << -1 << "\n";
        } else {
            long long months = (x + z - y - 1) / (z - y);
            cout << months << "\n";
        }
    }

    return 0;
}
