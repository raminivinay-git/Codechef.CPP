#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    vector<int> min_freq(26, 105); 
    
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }
        for (int j = 0; j < 26; ++j) {
            min_freq[j] = min(min_freq[j], freq[j]);
        }
    }
    
    string ans = "";
    for (int i = 0; i < 26; ++i) {
        if (min_freq[i] > 0 && min_freq[i] != 105) {
            ans += string(min_freq[i], i + 'a');
        }
    }
    
    if (ans.empty()) {
        cout << "no such string\n";
    } else {
        cout << ans << "\n";
    }
    
    return 0;
}
