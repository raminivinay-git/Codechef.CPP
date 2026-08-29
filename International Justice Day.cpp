#include <bits/stdc++.h>

using namespace std;

void InternationalJusticeDay(int x, int y) {
    if (x >= y) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
    int x, y;
    cin >> x >> y;
    InternationalJusticeDay(x, y);
    return 0;
}
