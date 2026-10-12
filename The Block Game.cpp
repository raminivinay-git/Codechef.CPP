#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string rev = s;
        int n = s.length();
        for (int i = 0; i < n / 2; i++) {
            swap(rev[i], rev[n - 1 - i]);
        }
        if (s == rev) {
            cout << "wins\n";
        } else {
            cout << "loses\n";
        }
    }
    return 0;
}
