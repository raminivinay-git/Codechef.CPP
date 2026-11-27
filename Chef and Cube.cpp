#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string f, b, l, r, top, bot;
        cin >> f >> b >> l >> r >> top >> bot;

        bool front_ok = (f == l || f == r) && (f == top || f == bot);
        bool back_ok = (b == l || b == r) && (b == top || b == bot);

        if (front_ok || back_ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
