#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int zeros_count = 0;
    int first_zero_index = -1;
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a == 0) {
            zeros_count++;
            // Mark the index of the first missed payment
            if (first_zero_index == -1) {
                first_zero_index = i;
            }
        }
    }
    
    long long total_due = 0;
    
    // If he missed at least one payment, he pays a fine for every month from the first miss onwards
    if (first_zero_index != -1) {
        total_due += (long long)(n - first_zero_index) * 100;
    }
    
    // Add the pending maintenance fees (1000 for each 0)
    total_due += (long long)zeros_count * 1000;
    
    cout << total_due << "\n";
}

int main() {
    // Fast I/O for faster execution times in competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
