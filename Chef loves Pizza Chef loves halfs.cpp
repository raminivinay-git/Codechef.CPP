#include <iostream>

using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int x;
            cin >> x;
            
            int p = 1;
            while (p * 2 <= x) {
                p *= 2;
            }
            
            cout << 2 * (x - p) << "\n";
        }
    }
    return 0;
}
