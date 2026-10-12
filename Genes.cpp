#include <iostream>

using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    if (a == 'R' || b == 'R') {
        cout << "R\n";
    } else if (a == 'B' || b == 'B') {
        cout << "B\n";
    } else {
        cout << "G\n";
    }
    return 0;
}
