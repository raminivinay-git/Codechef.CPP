#include <bits/stdc++.h>

using namespace std;

void CuteStrings(char s[4]) {
    if (s[0] == s[2] && s[1] == 'w') {
        cout << "CUTE" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
    char s[4];
    cin >> s;
    CuteStrings(s);
    return 0;
}
