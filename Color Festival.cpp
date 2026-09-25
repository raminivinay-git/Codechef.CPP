#include <iostream>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> unique_colors;
        for (int i = 0; i < n; i++) {
            int color;
            cin >> color;
            unique_colors.insert(color);
        }
        cout << unique_colors.size() << "\n";
    }
    return 0;
}
