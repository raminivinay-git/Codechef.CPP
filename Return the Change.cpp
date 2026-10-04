#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int remainder = x % 10;
        int rounded;
        if (remainder >= 5) {
            rounded = x + (10 - remainder);
        } else {
            rounded = x - remainder;
        }
        cout << 100 - rounded << "\n";
    }
    return 0;
}
