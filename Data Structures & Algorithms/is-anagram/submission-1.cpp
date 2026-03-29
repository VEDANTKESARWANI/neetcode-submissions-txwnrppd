class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>c(26,-1);
        int count=0;
        for(auto x:s)
        {
            int char_int=x-'a'+1;
            c[char_int]++;
            count++;
        }
        for(auto x:t)
        {
            int char_int=x-'a'+1;
            if(c[char_int]==-1)
            {
                return false;
            }
            c[char_int]--;

            count--;
        }
        if(count>0)
        {
            return false;
        }
        return true;

        
    }
};
