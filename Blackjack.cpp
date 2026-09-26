#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int third = 21 - (a + b);
        if (third >= 1 && third <= 10) {
            cout << third << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}
