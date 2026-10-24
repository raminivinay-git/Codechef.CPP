class Solution {
private:
    int findXOR(int n) {
        int mod = n % 4;
        if (mod == 0) return n;
        if (mod == 1) return 1;
        if (mod == 2) return n + 1;
        return 0;
    }
public:
    int rangeXOR(int L, int R) {
        return findXOR(R) ^ findXOR(L - 1);
    }
};
