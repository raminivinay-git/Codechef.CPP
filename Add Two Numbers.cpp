#include <iostream>

using namespace std;
void twosum(int a, int b) {
    cout << a + b << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        twosum(a, b);
    }
    return 0;
}
