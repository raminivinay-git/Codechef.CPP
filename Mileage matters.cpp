#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x, y, a, b;
        cin >> n >> x >> y >> a >> b;
        double petrol_cost = (double)n / a * x;
        double diesel_cost = (double)n / b * y;
        if (petrol_cost < diesel_cost) {
            cout << "PETROL\n";
        } else if (diesel_cost < petrol_cost) {
            cout << "DIESEL\n";
        } else {
            cout << "ANY\n";
        }
    }
    return 0;
}
