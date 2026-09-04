#include <bits/stdc++.h>

using namespace std;

int BoneAppetit(int n, int m, int x, int y) {
    return (n * x) + (m * y);
}

int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    cout << BoneAppetit(n, m, x, y) << endl;;
    return 0;
}
