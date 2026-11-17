#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long s, n;
        cin >> s >> n;
        
        long long coins = 0;
        
        if (s % 2 != 0) {
            coins++;
            s--;
        }
        
        coins += s / n;
        
        if (s % n > 0) {
            coins++;
        }
        
        cout << coins << "\n";
    }
    return 0;
}
