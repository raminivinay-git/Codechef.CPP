#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cows = n / 4;
        int remainder = n % 4;
        int chickens = remainder / 2;
        cout << cows + chickens << "\n";
    }
    return 0;
}
