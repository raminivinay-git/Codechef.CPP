#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, r;
        cin >> x >> y >> r;
        int extra = r / 30;
        int total_sticks = x + extra;
        int plates = (total_sticks + y - 1) / y;
        cout << plates << "\n";
    }
    return 0;
}
