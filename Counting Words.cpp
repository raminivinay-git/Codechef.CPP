#include <bits/stdc++.h>

using namespace std;
void CountingWords(int n, int m) {
    cout << m * n << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        CountingWords(n, m);
    }
    return 0;
}
