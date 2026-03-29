
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq; // Count frequency
        for (int num : nums) freq[num]++;

        // Create buckets: index = frequency, value = numbers
        int n = nums.size();
        vector<vector<int>> buckets(n + 1); // freq can be 1..n
        for (auto &p : freq) {
            buckets[p.second].push_back(p.first);
        }

        // Collect top k frequent elements
        vector<int> ans;
        for (int i = n; i >= 0 && ans.size() < k; i--) { // start from high frequency
            for (int num : buckets[i]) {
                ans.push_back(num);
                if (ans.size() == k) return ans;
            }
        }

        return ans;
    }
};