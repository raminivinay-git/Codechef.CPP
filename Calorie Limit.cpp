#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        
        int count = 0;
        long long current_calories = 0;
        
        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            if (current_calories + a <= k) {
                current_calories += a;
                count++;
            } else {
                long long remaining;
                while (i + 1 < n) {
                    cin >> remaining;
                    i++;
                }
                break;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
