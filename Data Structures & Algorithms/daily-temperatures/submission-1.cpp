class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(),0);
        stack<pair<int, int>> st;
        for (int i = 0; i < temperatures.size(); i++) {

  
            while(!st.empty() and st.top().first<temperatures[i])
            {
                int temp=st.top().first;
                int index=st.top().second;
                ans[index]=i-index;
                st.pop();

            }
            st.push(make_pair(temperatures[i], i));

        }
        return ans; 
    }
};
