#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 5) {
        cout << 85 * n << endl;
    }
    else {
        cout << n * 100 << endl;
    }
    return 0;
}
