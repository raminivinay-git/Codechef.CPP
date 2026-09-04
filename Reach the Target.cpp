#include <bits/stdc++.h>

using namespace std;

int Target(int x, int y) {
    return x - y;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        cout << Target(x, y) << endl;
    }
    return 0;
}
