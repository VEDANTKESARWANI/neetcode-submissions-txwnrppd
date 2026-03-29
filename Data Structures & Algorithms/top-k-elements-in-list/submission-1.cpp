class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;
        vector<int>ans;
        for(auto x:nums)
        {
            m[x]++;
        }
        map<int,vector<int>,greater<int>>mp;
        for(auto x:m)
        {
            mp[x.second].push_back(x.first);
        }
        for(auto x:mp)
        {

            for(auto l:x.second)
            {
                ans.push_back(l);
                 k--;
            if(k==0)
            {
                return ans;
            }
              
            }
           
         
        }
        return ans;


        
    }
};
