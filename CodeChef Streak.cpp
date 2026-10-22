#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    int max_om = 0, current_om = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            current_om++;
            max_om = max(max_om, current_om);
        } else {
            current_om = 0;
        }
    }
    
    int max_addy = 0, current_addy = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] > 0) {
            current_addy++;
            max_addy = max(max_addy, current_addy);
        } else {
            current_addy = 0;
        }
    }
    
    if (max_om > max_addy) {
        cout << "Om\n";
    } else if (max_addy > max_om) {
        cout << "Addy\n";
    } else {
        cout << "Draw\n";
    }
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
