#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (i != x && (i + x) % 2 == 0) {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
