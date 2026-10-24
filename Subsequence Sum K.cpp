bool existsSubsequence(vector<int>& nums, int n, int k) {
    vector<bool> dp(k + 1, false);
    dp[0] = true;
    
    for (int i = 0; i < n; i++) {
        for (int j = k; j >= nums[i]; j--) {
            if (dp[j - nums[i]]) {
                dp[j] = true;
            }
        }
    }
    
    return dp[k];
}
