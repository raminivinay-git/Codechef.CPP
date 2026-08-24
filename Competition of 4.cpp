#include <bits/stdc++.h>

using namespace std;

void ChessTournament(int x) {
    switch (x) {
        case 1:
            cout << "8000" << endl;
            break;
        case 2:
            cout << "4000" << endl;
            break;
        case 3:
            cout << "2000" << endl;
            break;
        case 4:
            cout << "1000" << endl;
            break;
    }
}

int main() {
    int x;
    cin >> x;
    ChessTournament(x);
    return 0;
}
