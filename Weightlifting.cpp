#include <bits/stdc++.h>

using namespace std;

void Weightlifting(int a1, int a2, int b1, int b2, int c1, int c2) {
    cout << (max(a1, a2) + max(b1, b2) + max(c1, c2)) << endl;
}

int main() {
    int a1, a2, b1, b2, c1, c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    Weightlifting(a1, a2, b1, b2, c1, c2);
    return 0;
}
