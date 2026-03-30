class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        int count_zero=0;
        int p=1;
        for(auto x:nums)
        {
            if(x==0)
            {
                count_zero++;
                continue;

            }
            p=x*p;
        }
        for(auto x:nums)
        {
            if(count_zero>1)
            {
                ans.push_back(0);
                continue;
            }
            if(x==0)
            {
                ans.push_back(p);
                continue;
            }
            
           if(count_zero==1)
           {
                ans.push_back(0);
                continue;
           }
           ans.push_back(p/x);

            

        }
        return ans;



    }
};
