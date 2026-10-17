#include <iostream>

using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    if ((a + b) % 2 != 0) {
        cout << "Alice\n";
    } else {
        cout << "Bob\n";
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
