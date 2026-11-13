#include <iostream>
#include <string>

using namespace std;

void solve() {
    int activities;
    string origin;
    cin >> activities >> origin;

    int total_laddus = 0;
    
    for (int i = 0; i < activities; ++i) {
        string activity;
        cin >> activity;
        
        if (activity == "CONTEST_WON") {
            int rank;
            cin >> rank;
            total_laddus += 300;
            if (rank < 20) {
                total_laddus += (20 - rank);
            }
        } else if (activity == "TOP_CONTRIBUTOR") {
            total_laddus += 300;
        } else if (activity == "BUG_FOUND") {
            int severity;
            cin >> severity;
            total_laddus += severity;
        } else if (activity == "CONTEST_HOSTED") {
            total_laddus += 50;
        }
    }

    if (origin == "INDIAN") {
        cout << total_laddus / 200 << "\n";
    } else {
        cout << total_laddus / 400 << "\n";
    }
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
