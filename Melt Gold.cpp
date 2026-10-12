#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int diff = x - y;
        int k = 1;
        while (diff > 0) {
            diff -= k;
            k++;
        }
        cout << k - 1 << "\n";
    }
    return 0;
}
