#include <iostream>

#include <queue>

#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector < int > dist(n + 1, -1);
    queue < int > q;

    q.push(k);
    dist[k] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        if (u == n) {
            cout << dist[u] << "\n";
            return;
        }

        int next_moves[3] = {
            u - 1,
            u + 1,
            n + 1 - u
        };
        for (int v: next_moves) {
            if (v >= 1 && v <= n && dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
