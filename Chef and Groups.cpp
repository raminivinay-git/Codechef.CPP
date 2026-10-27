#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while (cin >> n) {
        string s;
        cin >> s;
        
        int groups = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1' && (i == 0 || s[i - 1] == '0')) {
                groups++;
            }
        }
        
        cout << groups << "\n";
    }

    return 0;
}
