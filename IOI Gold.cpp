#include <bits/stdc++.h>

using namespace std;

void gold(int n, int g) {
    if (n >= g) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
int main() {
    int n, g;
    cin >> n >> g;
    gold(n, g);
    return 0;
}
