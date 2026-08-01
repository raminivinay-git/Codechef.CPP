#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int small = (a < b) ? a : b;
    cout << small * small << endl;
    return 0;
}
