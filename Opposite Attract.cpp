#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string t_str = "";
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                t_str += '1';
            } else {
                t_str += '0';
            }
        }
        cout << t_str << "\n";
    }
    return 0;
}
