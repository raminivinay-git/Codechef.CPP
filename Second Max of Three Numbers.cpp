#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    if (cin >> n) {
        while (n--) {
            vector < int > nums(3);
            cin >> nums[0] >> nums[1] >> nums[2];
            sort(nums.begin(), nums.end());
            cout << nums[1] << "\n";
        }
    }
    return 0;
}
