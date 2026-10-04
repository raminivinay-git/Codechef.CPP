#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        int boxes_per_shelf = (y + z - 1) / z;
        cout << x * boxes_per_shelf << "\n";
    }
    return 0;
}
