class Solution {
public:
    int robing(vector<int>& nums, int i, vector<int>& dp, int n) {
        if (i >= n) return 0;
        if (dp[i] != -1) return dp[i];
        int op1 = nums[i] + robing(nums, i + 2, dp, n);
        int op2 = robing(nums, i + 1, dp, n);
        return dp[i] = max(op1, op2);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];

        vector<int> dp1(n + 2, -1); // exclude last house: range [0, n-2]
        vector<int> dp2(n + 2, -1); // exclude first house: range [1, n-1]

        return max(robing(nums, 0, dp1, n - 1),
                    robing(nums, 1, dp2, n));
    }
};