#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;
        long long total = 0;
        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            total += min(a * x, y);
        }
        cout << total << "\n";
    }
    return 0;
}
