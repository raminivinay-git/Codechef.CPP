#include <cstdio>

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        if (y - x == z - y) {
            cout << 0 << "\n";
        } else if ((x + z) % 2 == 0 && y == (x + z) / 2) {
            cout << 0 << "\n";
        } else {
            cout << 1 << "\n";
        }
    }
    return 0;
}
