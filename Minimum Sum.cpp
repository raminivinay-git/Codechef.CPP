#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long g = 0;
        for (long long i = 0; i < n; i++) {
            long long x;
            cin >> x;
            g = gcd(g, x);
        }
        cout << n * g << "\n";
    }
    return 0;
}
