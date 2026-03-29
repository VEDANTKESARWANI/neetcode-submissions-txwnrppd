class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        int i=0;
        for(auto x:nums)
        {
            
            if(m.find(target-x)!=m.end())
            {
                return {m[target-x],i};
            }
            m[x]=i;
            i++;
        }
        return {};

    }
};
