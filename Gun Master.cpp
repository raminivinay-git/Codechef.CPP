#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        int switches = 0;
        int current_gun = 0; 
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            int needed_gun = (a > d ? 1 : 0);
            if (current_gun != needed_gun) {
                switches++;
                current_gun = needed_gun;
            }
        }
        cout << switches << "\n";
    }
    return 0;
}
