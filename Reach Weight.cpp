#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 0) {
            cout << (n / 2) * 30 << "\n";
        }
        else {
            cout << 20 + ((n - 1) / 2) * 30 << "\n";
        }
    }
    return 0;
}
