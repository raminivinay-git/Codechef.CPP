#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;
        
        int cakewalk = 0;
        int hard = 0;
        
        for (int i = 0; i < n; i++) {
            int solved;
            cin >> solved;
            
            if (solved >= p / 2) {
                cakewalk++;
            } else if (solved <= p / 10) {
                hard++;
            }
        }
        
        if (cakewalk == 1 && hard == 2) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
    return 0;
}
