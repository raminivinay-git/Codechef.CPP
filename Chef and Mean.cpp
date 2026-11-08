#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    
    if (sum % n != 0) {
        cout << "Impossible\n";
        return;
    }
    
    long long target = sum / n;
    for (int i = 0; i < n; ++i) {
        if (a[i] == target) {
            cout << i + 1 << "\n";
            return;
        }
    }
    
    cout << "Impossible\n";
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
