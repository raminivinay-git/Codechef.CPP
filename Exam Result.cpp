#include <iostream>

using namespace std;

int main() {
    int c, m, w, p, r;
    cin >> c >> m >> w >> p >> r;
    
    int score = (c * m) - (w * p);
    
    if (score >= r) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}
