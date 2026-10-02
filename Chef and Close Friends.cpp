#include <cstdio>

#include <algorithm>

using namespace std;

int main() {
    int t;
    if (scanf("%d", & t) != 1) return 0;
    while (t--) {
        long long x, y, z;
        scanf("%lld %lld %lld", & x, & y, & z);

        long long left_friend = max(x - y, x - z);
        long long right_friend = min(x + y, x + z);

        long long ans = 0;
        if (left_friend <= right_friend) {
            ans = right_friend - left_friend + 1;
            if (x >= left_friend && x <= right_friend) {
                ans--;
            }
        }

        printf("%lld\n", ans);
    }
    return 0;
}
