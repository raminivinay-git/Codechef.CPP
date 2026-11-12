#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    // Array to store the minimum frequency of each character across all strings.
    // Initialized to a large number (1000 is enough since max length is 100).
    vector<int> min_freq(26, 1000);

    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        
        vector<int> curr_freq(26, 0);
        for (char c : s) {
            curr_freq[c - 'a']++;
        }
        
        // Update the global minimum frequencies
        for (int j = 0; j < 26; ++j) {
            min_freq[j] = min(min_freq[j], curr_freq[j]);
        }
    }

    string ans = "";
    // Build the answer string alphabetically to ensure it's lexicographically smallest
    for (int i = 0; i < 26; ++i) {
        for (int j = 0; j < min_freq[i]; ++j) {
            ans += (char)('a' + i);
        }
    }

    if (ans.empty()) {
        cout << "no such string\n";
    } else {
        cout << ans << "\n";
    }

    return 0;
}
