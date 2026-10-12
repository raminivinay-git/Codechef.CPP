#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int sunny = 0, rainy = 0;
        for (int i = 0; i < 7; i++) {
            int val;
            cin >> val;
            if (val == 1) {
                sunny++;
            } else {
                rainy++;
            }
        }
        if (sunny > rainy) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
