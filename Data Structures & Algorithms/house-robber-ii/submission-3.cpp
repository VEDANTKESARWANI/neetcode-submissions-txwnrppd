class Solution {
public:
  int robing(vector<int>& nums,int i,vector<int>&dp,int n)
    {
        if(i>=n)
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        int op1=nums[i]+robing(nums,i+2,dp,n);
        int op2=robing(nums,i+1,dp,n);
        dp[i] =max(op1,op2);
        return dp[i];

    }
    int rob(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
               if(nums.size()==1)
        {
            return nums[0];
        }
        
        vector<int>dp(nums.size()+2,-1);
         vector<int> dp2(nums.size() + 2, -1);
        int n=nums.size();
        return max(robing(nums,0,dp,n-1),robing(nums,1,dp2,n));
    }
};
