#include <bits/stdc++.h>

using namespace std;

void GoldCoins101(int a, int b, int x, int y) {
    if (x > y) {
        cout << a << endl;
    }
    else {
        cout << b << endl;
    }
}

int main() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    GoldCoins101(a, b, x, y);
    return 0;
}
