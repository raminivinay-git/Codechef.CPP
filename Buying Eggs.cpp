#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, f;
    cin >> x >> y >> f;
    if ((x * 12) > ((y * 12) + f)) {
        cout << (y * 12) + f << endl;
    }
    else {
        cout << (x * 12) << endl;
    }
    return 0;
}
