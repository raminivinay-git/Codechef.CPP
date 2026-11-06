#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 200005;
int A[MAXN];
int first_occ[MAXN];
int last_occ[MAXN];
pair<int, int> intervals[MAXN];
bool seen[MAXN];

void solve() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; ++i) {
        first_occ[i] = -1;
        last_occ[i] = -1;
    }
    
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
        if (first_occ[A[i]] == -1) {
            first_occ[A[i]] = i;
        }
        last_occ[A[i]] = i;
    }
    
    int k = 0;
    for (int i = 1; i <= n; ++i) {
        if (first_occ[i] != -1 && first_occ[i] < last_occ[i]) {
            intervals[k].first = first_occ[i];
            intervals[k].second = last_occ[i];
            k++;
        }
    }
    
    if (k == 0) {
        cout << 0 << "\n";
        return;
    }
    
    sort(intervals, intervals + k);
    
    long long ans = 0;
    int L = intervals[0].first;
    int R = intervals[0].second;
    
    auto process = [&](int l, int r) {
        int cnt = 0;
        for (int i = l; i <= r; ++i) {
            if (!seen[A[i]]) {
                seen[A[i]] = true;
                cnt++;
            }
        }
        for (int i = l; i <= r; ++i) {
            seen[A[i]] = false;
        }
        return cnt;
    };
    
    for (int i = 1; i < k; ++i) {
        if (intervals[i].first <= R) {
            R = max(R, intervals[i].second);
        } else {
            ans += process(L, R);
            L = intervals[i].first;
            R = intervals[i].second;
        }
    }
    ans += process(L, R);
    
    cout << ans << "\n";
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
