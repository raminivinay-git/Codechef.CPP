#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        float a, b, x, y;
        cin >> a >> b >> x >> y;
        
        float time_chef = a / x;
        float time_chefina = b / y;
        
        if (time_chef < time_chefina) {
            cout << "Chef\n";
        } else if (time_chefina < time_chef) {
            cout << "Chefina\n";
        } else {
            cout << "Both\n";
        }
    }
    return 0;
}
