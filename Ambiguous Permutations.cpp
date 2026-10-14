#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    while (cin >> n && n != 0) {
        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
        }
        
        bool isAmbiguous = true;
        for (int i = 1; i <= n; i++) {
            if (p[p[i]] != i) {
                isAmbiguous = false;
                break;
            }
        }
        
        if (isAmbiguous) {
            cout << "ambiguous\n";
        } else {
            cout << "not ambiguous\n";
        }
    }
}

int main() {
    solve();
    return 0;
}
