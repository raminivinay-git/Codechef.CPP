#include <iostream>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;
    long long diff = b - a;
    if (diff % 3 == 0 || diff % 3 == 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
