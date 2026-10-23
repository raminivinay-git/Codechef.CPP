#include <iostream>
#include <algorithm>

using namespace std;

int freq[100005];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        for (int i = 1; i <= n; i++) {
            freq[i] = 0;
        }
        
        int max_f = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            freq[a]++;
            max_f = max(max_f, freq[a]);
        }
        
        cout << n - max_f << "\n";
    }
    return 0;
}
