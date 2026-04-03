class Solution {
public:
    int maxArea(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
            int m=0;

        while(l<r)
        {
            int temp=min(nums[l], nums[r]) * (r - l);
            m=max(m,temp);
            if(nums[l]<nums[r])
            {
                l++;
            }
            else if(nums[l]>nums[r])
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        return m;


        
    }
};
