#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long nCr(int n, int r) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;
    if (r > n / 2) r = n - r;
    long long res = 1;
    for (int i = 1; i <= r; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

void solve() {
    vector<int> scores(11);
    for (int i = 0; i < 11; i++) {
        cin >> scores[i];
    }
    int k;
    cin >> k;
    
    sort(scores.rbegin(), scores.rend());
    
    int target = scores[k - 1];
    int total_c = 0;
    int req_c = 0;
    
    for (int i = 0; i < 11; i++) {
        if (scores[i] == target) {
            total_c++;
        }
    }
    
    for (int i = 0; i < k; i++) {
        if (scores[i] == target) {
            req_c++;
        }
    }
    
    cout << nCr(total_c, req_c) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
