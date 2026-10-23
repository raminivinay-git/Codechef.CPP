#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long m;
        cin >> n >> m;
        
        int a[105];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a, a + n);
        
        long long current_people = 0;
        int groups_invited = 0;
        
        for (int i = 0; i < n; i++) {
            current_people += a[i];
            long long handshakes = (current_people * (current_people - 1)) / 2;
            
            if (handshakes <= m) {
                groups_invited++;
            } else {
                break;
            }
        }
        
        cout << groups_invited << "\n";
    }
    return 0;
}
