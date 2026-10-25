#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int x = 0, y = 0;
        int last_axis = 0; 
        
        for (char c : s) {
            if (c == 'L' || c == 'R') {
                if (last_axis != 1) {
                    if (c == 'L') x--;
                    else x++;
                    last_axis = 1;
                }
            } else if (c == 'U' || c == 'D') {
                if (last_axis != 2) {
                    if (c == 'U') y++;
                    else y--;
                    last_axis = 2;
                }
            }
        }
        
        cout << x << " " << y << "\n";
    }
    
    return 0;
}
