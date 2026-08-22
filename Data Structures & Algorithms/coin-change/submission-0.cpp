class Solution {
public:
    int coin(vector<int>& coins, int amount, int i,vector<vector<int>>&dp)
    {
        if (amount == 0)
        {
            return 0;
        }
        if (i >= coins.size())
        {
            return 10000;
        }
        if(dp[i][amount]!=-1)
        {
            return dp[i][amount];
        }

        int op1 = INT_MAX;  // default: not usable
        if (amount - coins[i] >= 0)
        {
            op1 = 1+coin(coins, amount - coins[i], i,dp);

        }

        int op2 = coin(coins, amount, i + 1,dp);

        dp[i][amount]= min(op1, op2);
        return dp[i][amount];
    }

    int coinChange(vector<int>& coins, int amount)
    {
        vector<vector<int>>dp(coins.size()+5,vector<int>(amount+10,-1));
        
        int res = coin(coins, amount, 0,dp);
        return res == 10000 ? -1 : res;
    }
};