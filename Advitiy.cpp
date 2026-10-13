#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string target = "ADVITIYA";
    while (t--) {
        string s;
        cin >> s;
        int steps = 0;
        for (int i = 0; i < 8; i++) {
            if (s[i] <= target[i]) {
                steps += target[i] - s[i];
            } else {
                steps += (26 - (s[i] - target[i]));
            }
        }
        cout << steps << "\n";
    }
    return 0;
}
