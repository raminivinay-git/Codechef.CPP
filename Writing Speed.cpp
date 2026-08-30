#include <bits/stdc++.h>

using namespace std;

void Writing(int x) {
    if (x <= 12) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
    int x;
    cin >> x;
    Writing(x);
    return 0;
}
