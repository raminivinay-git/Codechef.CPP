#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int cost1 = 3 * a;
    int cost2 = a + b;
    cout << min(cost1, cost2) << endl;
    return 0;
}
