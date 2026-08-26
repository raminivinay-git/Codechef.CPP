#include <bits/stdc++.h>

using namespace std;

void sweets(int x, int n) {
    int diff = x - (n * 10);
    cout << diff / 20 << endl;
}

int main() {
    int x, n;
    cin >> x >> n;
    sweets(x, n);
    return 0;
}
