#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, m;
        cin >> a >> b >> m;
        int d = abs(a - b);
        cout << min(d, m - d) << "\n";
    }
    return 0;
}
