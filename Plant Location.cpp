#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int n;
double a, b, c;
double px[2005], py[2005];

double cost(double x, double y) {
    double res = 0;
    for (int i = 0; i < n; ++i) {
        double dx = x - px[i];
        double dy = y - py[i];
        res += sqrt(dx * dx + dy * dy);
    }
    return res;
}

void solve() {
    cin >> n;
    cin >> a >> b >> c;
    for (int i = 0; i < n; ++i) {
        cin >> px[i] >> py[i];
    }

    double low = -1e7, high = 1e7;
    for (int iter = 0; iter < 150; ++iter) {
        double m1 = low + (high - low) / 3.0;
        double m2 = high - (high - low) / 3.0;

        double cost1, cost2;
        if (b != 0) {
            cost1 = cost(m1, -(a * m1 + c) / b);
            cost2 = cost(m2, -(a * m2 + c) / b);
        } else {
            cost1 = cost(-(b * m1 + c) / a, m1);
            cost2 = cost(-(b * m2 + c) / a, m2);
        }

        if (cost1 < cost2) {
            high = m2;
        } else {
            low = m1;
        }
    }

    double final_cost;
    if (b != 0) {
        final_cost = cost(low, -(a * low + c) / b);
    } else {
        final_cost = cost(-(b * low + c) / a, low);
    }
    cout << fixed << setprecision(6) << final_cost << "\n";
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
