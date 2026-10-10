#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int sa, sb, sc;
        cin >> sa >> sb >> sc;

        if (sa < sb && sa < sc) {
            cout << "Draw\n";
        } else if (sb < sa && sb < sc) {
            cout << "Bob\n";
        } else {
            cout << "Alice\n";
        }
    }

    return 0;
}
