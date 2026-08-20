class Solution {
public:

    int robing(vector<int>& nums,int i,vector<int>&dp)
    {
        if(i>=nums.size())
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        int op1=nums[i]+robing(nums,i+2,dp);
        int op2=robing(nums,i+1,dp);
        dp[i] =max(op1,op2);
        return dp[i];

    }
    int rob(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        vector<int>dp(nums.size()+2,-1);

        return robing(nums,0,dp);
    }
};
