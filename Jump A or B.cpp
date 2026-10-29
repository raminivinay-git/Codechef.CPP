#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m, a, b;
        cin >> n >> m >> a >> b;
        
        long long min_sum = n * a;
        long long max_sum = n * b;
        
        if (m >= min_sum && m <= max_sum && (m - min_sum) % (b - a) == 0) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
