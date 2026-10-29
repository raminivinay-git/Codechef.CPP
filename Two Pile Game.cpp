#include <iostream>

using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int x, y;
            cin >> x >> y;
            if (x % 2 != 0) {
                cout << "Alice\n";
            } else {
                cout << "Bob\n";
            }
        }
    }
    return 0;
}
