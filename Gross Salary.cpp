#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        double salary;
        cin >> salary;
        double gross_salary;
        if (salary < 1500) {
            gross_salary = salary + (0.10 * salary) + (0.90 * salary);
        } else {
            gross_salary = salary + 500 + (0.98 * salary);
        }
        cout << fixed << setprecision(2) << gross_salary << "\n";
    }
    return 0;
}
