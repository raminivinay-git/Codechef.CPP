#include <bits/stdc++.h>
using namespace std;

// 3D array for memoization: dp[pile1][pile2][last_removed]
int memo[25][25][25];

bool can_win(int x, int y, int prev_move) {
    // If the state has already been computed, return it
    if (memo[x][y][prev_move] != -1) {
        return memo[x][y][prev_move];
    }
    
    // Try removing 'm' stones from the first pile
    for (int m = prev_move + 1; m <= x; m++) {
        // If this move leaves the opponent in a losing state, we win
        if (!can_win(x - m, y, m)) {
            return memo[x][y][prev_move] = 1;
        }
    }
    
    // Try removing 'm' stones from the second pile
    for (int m = prev_move + 1; m <= y; m++) {
        if (!can_win(x, y - m, m)) {
            return memo[x][y][prev_move] = 1;
        }
    }
    
    // If no move forces a win, we lose
    return memo[x][y][prev_move] = 0;
}

void solve() {
    int x, y, k;
    cin >> x >> y >> k;
    
    bool alice_wins = false;
    
    // Check all valid opening moves for Alice on Pile 1
    for (int m = 1; m <= min(x, k); m++) {
        if (!can_win(x - m, y, m)) {
            alice_wins = true;
            break;
        }
    }
    
    // Check all valid opening moves for Alice on Pile 2 (if she hasn't already won)
    if (!alice_wins) {
        for (int m = 1; m <= min(y, k); m++) {
            if (!can_win(x, y - m, m)) {
                alice_wins = true;
                break;
            }
        }
    }
    
    if (alice_wins) {
        cout << "Alice\n";
    } else {
        cout << "Bob\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Initialize memoization table with -1
    memset(memo, -1, sizeof(memo));
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
