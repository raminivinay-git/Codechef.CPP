#include <cstdio>

using namespace std;

int main() {
    int t;
    if (scanf("%d", & t) != 1) return 0;
    while (t--) {
        int n, k, m;
        scanf("%d %d %d", & n, & k, & m);
        int cap = k * m;
        int ans = (n + cap - 1) / cap;
        printf("%d\n", ans);
    }
    return 0;
}
