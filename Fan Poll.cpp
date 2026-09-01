#include <bits/stdc++.h>

using namespace std;

string POLLING(int a, int b, int c) {
    if (a > b && a > c) {
        return "YES";
    }
    else {
        return "NO";
    }
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << POLLING(a, b, c);
    return 0;
}
