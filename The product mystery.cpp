#include <iostream>
#include <numeric>

using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            long long b, c;
            cin >> b >> c;
            long long g = gcd(b, c);
            cout << c / g << "\n";
        }
    }
    return 0;
}
