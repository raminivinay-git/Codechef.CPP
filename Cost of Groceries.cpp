class Solution {
public:
    int compute(int n, int x, std::vector<int>& a, std::vector<int>& b) {
        int total = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] >= x) {
                total += b[i];
            }
        }
        return total;
    }
};
