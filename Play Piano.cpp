#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool valid = true;
        
        for (int i = 0; i < s.length(); i += 2) {
            if (s[i] == s[i + 1]) {
                valid = false;
                break;
            }
        }
        
        if (valid) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
    return 0;
}
