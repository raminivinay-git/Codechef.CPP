#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        if (a % 2 == 1 && b % 2 == 1) {
            cout << "No\n";
        } else if (a == 1 || b == 1) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }
    }
    return 0;
}
