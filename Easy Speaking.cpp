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
        int count = 0;
        bool found = false;
        for (int i = 0; i < n; i++) {
            char c = s[i];
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                count++;
                if (count >= 4) {
                    found = true;
                }
            } else {
                count = 0;
            }
        }
        if (found) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
