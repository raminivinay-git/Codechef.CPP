#include <bits/stdc++.h>

using namespace std;

string Overspeeding(int s) {
    if (s > 40) {
        return "YES";
    }
    else {
        return "NO";
    }
}

int main() {
    int s;
    cin >> s;
    cout << Overspeeding(s);
    return 0;
}
