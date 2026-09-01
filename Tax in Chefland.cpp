#include <bits/stdc++.h>

using namespace std;

int TAX(int x) {
    if (x > 100) {
        return x - 10;
    }
    else {
        return x;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        cout << TAX(x) << endl;
    }
    return 0;
}
