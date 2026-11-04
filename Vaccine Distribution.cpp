#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        
        int risk = 0;
        int not_risk = 0;
        
        for (int i = 0; i < n; i++) {
            int age;
            cin >> age;
            if (age >= 80 || age <= 9) {
                risk++;
            } else {
                not_risk++;
            }
        }
        
        int days = (risk + d - 1) / d + (not_risk + d - 1) / d;
        
        cout << days << "\n";
    }
    return 0;
}
