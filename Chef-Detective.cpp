#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int reported[100005] = {0};
    
    for (int i = 1; i <= n; i++) {
        int r;
        cin >> r;
        reported[r] = 1;
    }
    
    for (int i = 1; i <= n; i++) {
        if (reported[i] == 0) {
            cout << i << " ";
        }
    }
    
    cout << '\n';
    return 0;
}
