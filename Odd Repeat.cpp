#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, s;
        cin >> n >> k >> s;
        
        long long initial_sum = n * n;
        long long extra_sum = s - initial_sum;
        long long x = extra_sum / (k - 1);
        
        cout << x << "\n";
    }
    return 0;
}
