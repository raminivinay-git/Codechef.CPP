#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void solve() {
    int k, n;
    cin >> k >> n;
    
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        
        pq.push(val);
        
        if (pq.size() > k) {
            pq.pop();
        }
        
        if (pq.size() < k) {
            cout << -1 << " ";
        } else {
            cout << pq.top() << " ";
        }
    }
    cout << "\n";
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
