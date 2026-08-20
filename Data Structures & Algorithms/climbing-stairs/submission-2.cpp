class Solution {
public:
 int climb(int n,vector<int>&dp)
 {
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
   int op1=0;
   int op2=0;
   if(n-2>=0)
   {
    op1+=climb(n-2,dp);
   }
   if(n-1>=0)
   {
    op2+=climb(n-1,dp);
   }
   dp[n]=op1+op2;
    return dp[n];
 }
    int climbStairs(int n) {
        // base case
        vector<int>dp(n+2,-1);
        if(n==0)
        {
            return 0;
        }
        return climb(n,dp);
        
    }
};
