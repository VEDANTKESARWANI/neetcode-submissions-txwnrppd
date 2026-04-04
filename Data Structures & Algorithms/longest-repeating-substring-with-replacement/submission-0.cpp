class Solution {
public:
    int characterReplacement(string s, int k) {
        int r=0;
        int max_freq=0;
        map<char,int>m;
        int res=0;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
            max_freq=max(max_freq,m[s[i]]);
            while((i-r+1)-max_freq>k)
            {
                m[s[r]]--;
                r++;
            }
            res=max(res,i-r+1);
        }
        return res;

        

    }
};
