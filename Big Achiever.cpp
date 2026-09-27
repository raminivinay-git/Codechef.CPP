#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int max_val = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a > max_val) {
                max_val = a;
                cout << 1 << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
