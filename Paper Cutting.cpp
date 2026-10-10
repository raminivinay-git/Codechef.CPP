#include <iostream>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long count_per_side = n / k;
        long long total_squares = count_per_side * count_per_side;

        cout << total_squares << "\n";
    }
    
    return 0;
}
