class Solution {
public:
    int characterReplacement(string s, int k) {
        map<int,int>m;
        int maxf=0;
        int j=0;
        int i=0;
        int res=0;
        while(j<s.size())
        {
            m[s[j]]++;
            maxf=max(maxf,m[s[j]]);
            while((j-i+1)-maxf>k)
            {
                m[s[i]]--;
                i++;
            }
            j++;

            res=max(res,j-i+1);

        }
        return res-1;

        

        
    }
};
