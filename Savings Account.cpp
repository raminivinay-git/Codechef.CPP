#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
        long long total = x * y;
        if (total <= z) {
            cout << 0 << "\n";
        } else {
            long long needed = z / y;
            cout << x - needed << "\n";
        }
    }
    return 0;
}
