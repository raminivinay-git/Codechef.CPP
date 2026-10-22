#include <iostream>
#include <cmath>

using namespace std;

void solve() {
    double finish, distance_to_bolt, tiger_accel, bolt_speed;
    cin >> finish >> distance_to_bolt >> tiger_accel >> bolt_speed;
    
    double bolt_time = finish / bolt_speed;
    double tiger_distance = finish + distance_to_bolt;
    double tiger_time = sqrt(2.0 * tiger_distance / tiger_accel);
    
    if (bolt_time < tiger_time) {
        cout << "Bolt\n";
    } else {
        cout << "Tiger\n";
    }
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
