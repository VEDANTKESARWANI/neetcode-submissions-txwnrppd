class Solution {
public:
    string minWindow(string s, string t) {
                if (t.empty() or t.size()>s.size()) return "";

        unordered_map<char, int> m;
        int count=0;
        for (char c : t) {
            m[c]++;
            count++;
        }
        int i=0;
        int j=0;
        int min_left=0;
        int min_len=INT_MAX;
        while(j<s.size())
        {
            m[s[j]]--;
            if(m[s[j]]>=0)
            {
                count--;
            }
            if(count==0)
            {
                while(count == 0)
                {
                    m[s[i]]++;
                     if(min_len>j-i+1)
                        {
                            min_left=i;
                            min_len=j-i+1;
                        }
                    if(m[s[i]]>=1)
                    {
                        count++;
                       

                    }
                    i++;
                }
            }
            j++;
        }
        return min_len == INT_MAX ? "" : s.substr(min_left, min_len);



        
    }
};
