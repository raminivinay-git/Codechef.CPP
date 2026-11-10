#include <iostream>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cout << 2 * i + 1 << " ";
        }
        cout << "\n";
    }
    return 0;
}
