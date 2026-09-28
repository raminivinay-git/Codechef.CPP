#include <iostream>

#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int floorX = (x + 9) / 10;
        int floorY = (y + 9) / 10;
        cout << abs(floorX - floorY) << "\n";
    }
    return 0;
}
