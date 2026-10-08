#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count_pos = 0, count_neg = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a == 1) count_pos++;
            else count_neg++;
        }
        if (n % 2 != 0) {
            cout << -1 << "\n";
        } else {
            int diff = abs(count_pos - count_neg);
            cout << diff / 2 << "\n";
        }
    }
    return 0;
}
