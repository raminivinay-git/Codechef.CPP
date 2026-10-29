#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            string s;
            cin >> s;
            
            int a = 0;
            int b = 0;
            for (char c : s) {
                if (c == 'a') {
                    a++;
                } else {
                    b++;
                }
            }
            
            cout << min(a, b) << "\n";
        }
    }
    return 0;
}
