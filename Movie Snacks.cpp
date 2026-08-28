#include <bits/stdc++.h>

using namespace std;

void MovieSnacks(int x, int y, int z) {
    int each = (2 * x) + (3 * y);
    int combo = (z * 2) + y;
    cout << min(each, combo);
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    MovieSnacks(x, y, z);
    return 0;
}
