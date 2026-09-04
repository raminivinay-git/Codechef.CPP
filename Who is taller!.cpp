#include <bits/stdc++.h>

using namespace std;

char Height(int x, int y) {
    return (x > y) ? 'A' : 'B';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        cout << Height(x, y) << endl;
    }
    return 0;
}
