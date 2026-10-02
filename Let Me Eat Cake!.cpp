#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        long long total_eaten = 0;
        
        while (a != b) {
            if (a > b) {
                long long eaten = (a + 1) / 2;
                total_eaten += eaten;
                a -= eaten;
            } else {
                long long eaten = (b + 1) / 2;
                total_eaten += eaten;
                b -= eaten;
            }
        }
        
        cout << total_eaten << "\n";
    }
    
    return 0;
}
