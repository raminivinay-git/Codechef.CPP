#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        if (X + 2 * Z >= Y) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
