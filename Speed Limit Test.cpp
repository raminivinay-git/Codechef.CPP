#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        double a, x, b, y;
        cin >> a >> x >> b >> y;
        double speed_alice = a / x;
        double speed_bob = b / y;
        if (speed_alice > speed_bob) {
            cout << "ALICE\n";
        } else if (speed_bob > speed_alice) {
            cout << "BOB\n";
        } else {
            cout << "EQUAL\n";
        }
    }
    return 0;
}
