#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a = 0, b = 0, ab = 0, o = 0;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            if (s == "A") a++;
            else if (s == "B") b++;
            else if (s == "AB") ab++;
            else if (s == "O") o++;
        }
        cout << o + max(a, b) + ab << "\n";
    }
    return 0;
}
