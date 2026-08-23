#include <bits/stdc++.h>

using namespace std;

void Elections(int x, int y) {
    if (x >= (y * 2)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
    int x, y;
    cin >> x >> y;
    Elections(x, y);
    return 0;
}
