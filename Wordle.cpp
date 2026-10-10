#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s, t_str;
        cin >> s >> t_str;

        string m = "";
        for (int i = 0; i < 5; i++) {
            if (s[i] == t_str[i]) {
                m += 'G';
            } else {
                m += 'B';
            }
        }

        cout << m << "\n";
    }

    return 0;
}
