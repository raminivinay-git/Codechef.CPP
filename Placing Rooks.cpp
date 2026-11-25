#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        int bestK = -1, bestA = 0, bestB = 0, bestC = 0;

        for (int a = 0; a <= n && 2 * a <= m; a++) {
            for (int b = 0; a + 2 * b <= n && 2 * a + b <= m; b++) {
                int c = min(n - a - 2 * b, m - 2 * a - b);
                int k = 2 * a + 2 * b + c;
                if (k > bestK) {
                    bestK = k;
                    bestA = a;
                    bestB = b;
                    bestC = c;
                }
            }
        }

        char grid[105][105];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                grid[i][j] = '.';
            }
        }

        int r = 0, col = 0;
        for (int i = 0; i < bestA; i++) {
            grid[r][col] = 'R';
            grid[r][col + 1] = 'R';
            r += 1;
            col += 2;
        }
        for (int i = 0; i < bestB; i++) {
            grid[r][col] = 'R';
            grid[r + 1][col] = 'R';
            r += 2;
            col += 1;
        }
        for (int i = 0; i < bestC; i++) {
            grid[r][col] = 'R';
            r += 1;
            col += 1;
        }

        cout << bestK << "\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << grid[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}
