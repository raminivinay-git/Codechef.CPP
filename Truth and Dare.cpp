#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int tr, dr, ts, ds, x;
        bool t_ram[105] = {false}, d_ram[105] = {false};
        
        cin >> tr;
        for (int i = 0; i < tr; i++) {
            cin >> x;
            t_ram[x] = true;
        }
        
        cin >> dr;
        for (int i = 0; i < dr; i++) {
            cin >> x;
            d_ram[x] = true;
        }
        
        bool win = true;
        
        cin >> ts;
        for (int i = 0; i < ts; i++) {
            cin >> x;
            if (!t_ram[x]) win = false;
        }
        
        cin >> ds;
        for (int i = 0; i < ds; i++) {
            cin >> x;
            if (!d_ram[x]) win = false;
        }
        
        cout << (win ? "yes\n" : "no\n");
    }
    return 0;
}
