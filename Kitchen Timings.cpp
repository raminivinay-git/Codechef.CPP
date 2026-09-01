#include <bits/stdc++.h>

using namespace std;

int Kitchen(int x, int y) {
    return y - x;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        cout << Kitchen(x, y) << endl;
    }
    return 0;
}
