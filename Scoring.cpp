#include <bits/stdc++.h>

using namespace std;

void SCORING(int x, int y) {
    int diff = y - x;
    int bob = diff / 2;
    int alice = bob + x;
    cout << alice << " " << bob << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        SCORING(x, y);
    }
    return 0;
}
