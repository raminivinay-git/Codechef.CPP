#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x > y) {
        cout << "ALICE" << endl;
    }
    else if (x < y) {
        cout << "BOB" << endl;
    }
    else {
        cout << "DRAW" << endl;
    }
    return 0;
}
