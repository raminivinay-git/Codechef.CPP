#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, r, miss;
    cin >> l >> r;
    if (l == r) {
        cout << "0" << endl;
    }
    else {
        miss = abs(l - r);
        cout << miss << endl;
    }
    return 0;
}
