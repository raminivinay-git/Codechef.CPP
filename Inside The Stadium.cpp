#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long total_runs = 0;
        int count = 0;
        for (int i = 1; i <= n; i++) {
            long long a;
            cin >> a;
            total_runs += a;
            if (total_runs == i) {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
