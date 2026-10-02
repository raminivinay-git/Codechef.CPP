#include <bits/stdc++.h>

using namespace std;

int main() {
    int b, h, c;
    cin >> b >> h >> c;
    int max_sandwiches = min(b / 2, h + c);
    cout << max_sandwiches << "\n";
    return 0;
}
