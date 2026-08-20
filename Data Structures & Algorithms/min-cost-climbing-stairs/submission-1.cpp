class Solution {
public:

    int costclimb(vector<int>& cost,int n,int i,vector<int>&dp)
    {
        if(i>=n)
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        int op1=INT_MAX;
        int op2=INT_MAX;
        if(i+1<=n)
        {
            op1=min(op1,cost[i]+costclimb(cost,n,i+1,dp));
        }
                if(i+2<=n)
        {
            op2=min(op2,cost[i]+costclimb(cost,n,i+2,dp));
        }
        dp[i]= min(op1,op2);
        return dp[i];


    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();

        int i=0;
        vector<int>dp(n+100,-1);
        int x_1= costclimb(cost,n,i,dp);
        int x_2=costclimb(cost,n,++i,dp);
        return min(x_1,x_2);



    }
};
