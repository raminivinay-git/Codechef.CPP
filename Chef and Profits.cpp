#include <iostream>

using namespace std;

void solve() {
    long long x, y, z;
    cin >> x >> y >> z;
    long long spent = x * y;
    long long received = x * z;
    cout << received - spent << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
