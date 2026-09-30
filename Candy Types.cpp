#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int n;
        cin >> n;
        
        int freq[105] = {0};
        int max_freq = 0;
        int best_color = 1;
        
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            freq[a]++;
            
            if (freq[a] > max_freq) {
                max_freq = freq[a];
                best_color = a;
            } else if (freq[a] == max_freq) {
                if (a < best_color) {
                    best_color = a;
                }
            }
        }
        
        cout << best_color << "\n";
    }
    
    return 0;
}
