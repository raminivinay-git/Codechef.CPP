#include <bits/stdc++.h>

using namespace std;

void TestMatchTarget(int x, int y, int z) {
    if (y > (x + z)) {
        cout << "0" << endl;
    }
    else {
        cout << ((x + z) - y) + 1 << endl;
    }
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    TestMatchTarget(x, y, z);
    return 0;
}
