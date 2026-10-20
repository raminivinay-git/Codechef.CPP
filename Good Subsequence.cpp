#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int count = 0;
        int last_parity = -1;
        for (int i = 0; i < n; i++) {
            int parity = a[i] % 2;
            if (last_parity == -1 || parity != last_parity) {
                count++;
                last_parity = parity;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
