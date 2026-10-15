#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, b;
    if (cin >> l >> b) {
        int area = l * b;
        int peri = 2 * (l + b);
        if (area > peri) {
            cout << "Area\n" << area << "\n";
        } else if (peri > area) {
            cout << "Peri\n" << peri << "\n";
        } else {
            cout << "Eq\n" << area << "\n";
        }
    }
    return 0;
}
