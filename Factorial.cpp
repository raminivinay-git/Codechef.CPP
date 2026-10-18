#include <iostream>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long count = 0;
    for (long long i = 5; n / i > 0; i *= 5) {
        count += n / i;
    }
    cout << count << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
