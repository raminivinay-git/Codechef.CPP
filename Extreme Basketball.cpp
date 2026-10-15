#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int diff = (b + 10) - a;
        if (diff <= 0) {
            cout << 0 << "\n";
        } else {
            cout << (diff + 2) / 3 << "\n";
        }
    }
    return 0;
}
