#include <bits/stdc++.h>

using namespace std;

void exam(int n, int m, int a) {
    if ((n * a) >= m) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
    int n, m, a;
    cin >> n >> m >> a;
    exam(n, m, a);
    return 0;
}
