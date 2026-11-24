#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string u;
        cin >> u;

        string s = "";
        int i = 0;
        while (i < n) {
            int j = i;
            while (j < n && u[j] == u[i]) {
                j++;
            }
            int count = j - i;
            if (count % 2 == 1) {
                s += u[i];
            } else {
                s += u[i];
                s += u[i];
            }
            i = j;
        }
        cout << s << '\n';
    }
    return 0;
}
