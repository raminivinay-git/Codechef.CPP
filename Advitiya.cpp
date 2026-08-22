#include <bits/stdc++.h>

using namespace std;

void advitiya(int n) {
    if (n == 16 || n == 17 || n == 18) {
        cout << "ADVITIYA" << endl;
    }
    else {
        cout << "WAITING FOR ADVITIYA" << endl;
    }
}
int main() {
    int n;
    cin >> n;
    advitiya(n);
    return 0;
}
