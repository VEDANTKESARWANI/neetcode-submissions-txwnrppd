class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                break;
            }
            if(i>0 and nums[i]==nums[i-1])
            {
                continue;
            }
            int l=i+1;
            int r=nums.size()-1;
            while(l<r)
            {
                int a=nums[l];
                int b=nums[r];
                int c=nums[i];
                if(a+b+c==0)
                {
                    ans.push_back({a,b,c});
                    l++;
                    r--;
                    while(l<r and nums[r]==nums[r+1])
                    {
                        r--;
                    }
                }
                else if(a+b+c>0)
                {
                    r--;
                }
                else
                {
                    l++;
                }
            }
        }
        return ans;


        
    }
};
