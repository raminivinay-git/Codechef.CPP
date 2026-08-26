#include <bits/stdc++.h>

using namespace std;

void Mastercheffinals(int x) {
    if (x <= 10) {
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
        Mastercheffinals(x);
    }
    return 0;
}
