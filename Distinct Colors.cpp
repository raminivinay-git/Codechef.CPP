#include <cstdio>

#include <algorithm>

using namespace std;

int main() {
    int t;
    if (scanf("%d", & t) != 1) return 0;
    while (t--) {
        int n;
        scanf("%d", & n);
        int max_val = 0;
        for (int i = 0; i < n; ++i) {
            int a;
            scanf("%d", & a);
            max_val = max(max_val, a);
        }
        printf("%d\n", max_val);
    }
    return 0;
}
