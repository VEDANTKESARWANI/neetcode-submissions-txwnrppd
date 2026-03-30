class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        for(auto x:nums)

        {
            s.insert(x);
        }
        int len=0;
        int m=0;
        for(auto x:nums)
        {
            if(s.contains(x-1))
            {
                continue;
            }
            else
            {
                len=1;
                int temp=x+1;
                while(s.contains(temp))
                {
                    len++;
                    
                    temp++;
                }
                m=max(len,m);
            }
        }
        return m;



        
    }
};
