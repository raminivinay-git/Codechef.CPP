#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        int total_time = x * y;
        if (x % 3 == 0) {
            total_time += ((x / 3) - 1) * z;
        } else {
            total_time += (x / 3) * z;
        }
        cout << total_time << "\n";
    }
    return 0;
}
