#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int change = 100 - x;
        cout << (change / 10) * 10 << "\n";
    }
    return 0;
}
