#include <bits/stdc++.h>

using namespace std;

void gifts(int h, int l, int w) {
    int total = ((h * l) + (l * w) + (w * h));
    cout << (1000 / total) / 2 << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int h, l, w;
        cin >> h >> l >> w;
        gifts(h, l, w);
    }
    return 0;
}
