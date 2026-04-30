class Solution {
public:
    int findMin(vector<int> &nums) {
        int high=nums.size()-1;
        int low=0;
        int min_ele=INT_MAX;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            min_ele=min(nums[mid],min_ele);
            if(nums[mid]>nums[high])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return min_ele;
    }
};
