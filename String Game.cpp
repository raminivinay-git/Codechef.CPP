#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int freq[26] = {0};
        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }
        
        bool possible = true;
        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 != 0) {
                possible = false;
                break;
            }
        }
        
        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
