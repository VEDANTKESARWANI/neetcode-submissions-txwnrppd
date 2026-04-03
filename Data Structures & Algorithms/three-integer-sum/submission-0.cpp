class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        map<int, vector<int>> m;

        // Store all indices for each value
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]].push_back(i);
        }

        vector<vector<int>> ans;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {

                int a = nums[i];
                int b = nums[j];
                int sum = a + b;
                int target = -sum;

                if (m.find(target) != m.end()) {
                    // Check valid index (not same as i or j)
                    for (int idx : m[target]) {
                        if (idx != i && idx != j) {
                            vector<int> v = {a, b, target};
                            ans.push_back(v);
                            break;
                        }
                    }
                }
            }
        }

        // Remove duplicates
        map<vector<int>, int> mp;

        for (auto &row : ans) {
            sort(row.begin(), row.end());
            mp[row]++;
        }

        vector<vector<int>> ansi;
        for (auto &row : mp) {
            ansi.push_back(row.first);
        }

        return ansi;
    }
};