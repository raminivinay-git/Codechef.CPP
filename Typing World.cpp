#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s, l;
        cin >> s >> l;

        unordered_set<char> left_chars(l.begin(), l.end());

        int max_streak = 0;
        int current_streak = 0;
        char last_hand = ' ';

        for (int i = 0; i < n; i++) {
            char current_hand = (left_chars.count(s[i]) ? 'L' : 'R');

            if (current_hand == last_hand) {
                current_streak++;
            } else {
                current_streak = 1;
                last_hand = current_hand;
            }

            max_streak = max(max_streak, current_streak);
        }

        cout << max_streak << "\n";
    }

    return 0;
}
