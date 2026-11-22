#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r, c;
        cin >> r >> c;
        string grid[105];
        for (int i = 0; i < r; i++) {
            cin >> grid[i];
            for (int j = 0; j < c; j++) {
                grid[i][j] = tolower(grid[i][j]);
            }
        }
        bool found = false;
        for (int i = 0; i < r; i++) {
            if (grid[i].find("spoon") != string::npos) {
                found = true;
                break;
            }
        }
        if (!found) {
            for (int j = 0; j < c; j++) {
                for (int i = 0; i + 4 < r; i++) {
                    if (grid[i][j] == 's' && grid[i + 1][j] == 'p' &&
                        grid[i + 2][j] == 'o' && grid[i + 3][j] == 'o' &&
                        grid[i + 4][j] == 'n') {
                        found = true;
                        break;
                    }
                }
                if (found) break;
            }
        }
        if (found) {
            cout << "There is a spoon!\n";
        } else {
            cout << "There is indeed no spoon!\n";
        }
    }
    return 0;
}
