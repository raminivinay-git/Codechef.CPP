#include <bits/stdc++.h>

using namespace std;

void minimumPrice(int n, int m, int a, int b, int c) {
    int combo = min(n, m);
    int tickets = n - combo;
    int popcorn = m - combo;
    int totalcost = (combo * c) + (tickets * a) + (popcorn * b);
    cout << totalcost << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, a, b, c;
        cin >> n >> m >> a >> b >> c;
        minimumPrice(n, m, a, b, c);
    }
    return 0;
}
