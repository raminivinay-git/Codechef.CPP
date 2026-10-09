#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;
        
        int total_sum = 0;
        int max_chair = 0;
        
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            total_sum += a;
            if (a > max_chair) {
                max_chair = a;
            }
        }
        
        int ved_view = k + max_chair;
        int varun_view = p + (total_sum - max_chair);
        
        if (ved_view > varun_view) {
            cout << "Ved\n";
        } else if (varun_view > ved_view) {
            cout << "Varun\n";
        } else {
            cout << "Equal\n";
        }
    }
    return 0;
}
