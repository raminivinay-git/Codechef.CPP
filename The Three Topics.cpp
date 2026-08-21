#include <bits/stdc++.h>

using namespace std;
void topics(int a, int b, int c, int x) {
    if (a == x || b == x || c == x) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
int main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    topics(a, b, c, x);
    return 0;
}
