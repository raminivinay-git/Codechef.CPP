#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        long long d1 = x1 * x1 + y1 * y1;
        long long d2 = x2 * x2 + y2 * y2;

        if (d1 > d2) {
            cout << "ALEX\n";
        } else if (d2 > d1) {
            cout << "BOB\n";
        } else {
            cout << "EQUAL\n";
        }
    }
    return 0;
}
