#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if (z > 50) {
        z = z - 50;
        cout << x + (z * y) << endl;
    }
    else {
        cout << x << endl;
    }
    return 0;
}
