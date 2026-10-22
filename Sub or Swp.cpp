#include <iostream>
#include <numeric>

using namespace std;

void solve() {
    long long x, y;
    cin >> x >> y;
    cout << std::gcd(x, y) << "\n";
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
