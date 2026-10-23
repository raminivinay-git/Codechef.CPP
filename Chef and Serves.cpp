#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long p1, p2, k;
        cin >> p1 >> p2 >> k;
        
        long long total_points = p1 + p2;
        long long turns = total_points / k;
        
        if (turns % 2 == 0) {
            cout << "CHEF\n";
        } else {
            cout << "COOK\n";
        }
    }
    return 0;
}
