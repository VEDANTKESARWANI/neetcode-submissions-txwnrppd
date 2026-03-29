class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>m;
        for(auto s:strs)
        {
            string temp=s;
            sort(s.begin(),s.end());
            m[s].push_back(temp);
        }
        vector<vector<string>>s;
        for(auto x:m)
        {
            s.push_back(x.second);
        }
        return s;
        
    }
};
