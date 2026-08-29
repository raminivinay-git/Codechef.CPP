#include <bits/stdc++.h>

using namespace std;

void Testcases(int x, int n) {
    int diff = x / 10;
    cout << diff * n << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, n;
        cin >> x >> n;
        Testcases(x, n);
    }
    return 0;
}
