#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int total = (a + 1) * 4 + (b * 3);
    cout << (total + 7) / 8;
    return 0;
}
