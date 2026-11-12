#include <iostream>
using namespace std;

int main() {
    int r, b;
    cin >> r >> b;
    
    if (r <= b * 6) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    
    return 0;
}
