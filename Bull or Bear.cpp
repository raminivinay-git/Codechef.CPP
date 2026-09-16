#include <bits/stdc++.h>

using namespace std;
void BullOrBear(int x, int y) {
    if (x > y) {
        cout << "LOSS" << endl;
    }
    else
    if (x < y) {
        cout << "PROFIT" << endl;
    }
    else {
        cout << "NEUTRAL" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        BullOrBear(x, y);
    }
    return 0;
}
