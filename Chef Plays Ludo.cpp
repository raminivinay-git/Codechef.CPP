#include <bits/stdc++.h>

using namespace std;

void ludo(int x) {
    if (x == 6) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        ludo(x);
    }
    return 0;
}
