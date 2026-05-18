class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>freq(26,0);
        for(int i=0;i<tasks.size();i++)
        {
            freq[tasks[i]-'A']++;
        }
        sort(freq.begin(),freq.end(),greater<int>());
        int idle=(freq[0]-1)*n;
        for(int i=1;i<=freq.size()-1;i++)
        {
            idle=idle-min(freq[0]-1,freq[i]);
        }
        return tasks.size()+max(idle,0);
        
    }
};
