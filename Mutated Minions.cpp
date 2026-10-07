#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int count = 0;
        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            if ((val + k) % 7 == 0) {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
