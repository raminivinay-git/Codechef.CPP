#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int c = 0, o = 0, d = 0, e = 0, h = 0, f = 0;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            for (char ch : s) {
                if (ch == 'c') c++;
                else if (ch == 'o') o++;
                else if (ch == 'd') d++;
                else if (ch == 'e') e++;
                else if (ch == 'h') h++;
                else if (ch == 'f') f++;
            }
        }
        cout << min({c / 2, e / 2, o, d, h, f}) << "\n";
    }
    return 0;
}
