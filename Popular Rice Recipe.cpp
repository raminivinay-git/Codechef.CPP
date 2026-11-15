#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        unordered_map<string, char> votes;
        for (int i = 0; i < n; i++) {
            string userid;
            char vote;
            cin >> userid >> vote;
            votes[userid] = vote;
        }
        
        int score = 0;
        for (auto const& [user, v] : votes) {
            if (v == '+') {
                score++;
            } else {
                score--;
            }
        }
        
        cout << score << "\n";
    }
    return 0;
}
