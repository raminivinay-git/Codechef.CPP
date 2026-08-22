#include <bits/stdc++.h>

using namespace std;

void PassingChain(int n, int k) {
    int present = 1;
    while (present + k <= n) {
        present += k;
    }
    cout << present << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        PassingChain(n, k);
    }
    return 0;
}
