#include <iostream>

using namespace std;

void solve() {
    long long w, l;
    cin >> w >> l;
    if ((w * l) % 2 != 0) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
