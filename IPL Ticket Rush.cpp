#include <bits/stdc++.h>

using namespace std;

int IPL(int n, int m) {
    if (m >= n) {
        return 0;
    }
    else {
        return n - m;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << IPL(n, m) << endl;
    }
    return 0;
}
