#include <bits/stdc++.h>

using namespace std;

void SavingTaxes(int x, int y) {
    cout << x - y << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        SavingTaxes(x, y);
    }
    return 0;
}
