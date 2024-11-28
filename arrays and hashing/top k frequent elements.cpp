//  using bucket sort

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> ans;
        int n = nums.size();

        for (auto a : nums) {
            ans[a]++;
        }

        // using bucket sort
        vector<vector<int>> bucket(nums.size() + 1);
        for (auto [key, val] : ans) {
            bucket[val].push_back(key);
        }

        vector<int> result;

        for (int i = n; i >= 0 && k > 0; i--) {
            if (bucket[i].size() != 0) {
                for (auto val : bucket[i]) {
                    result.push_back(val);
                    k--;
                }
            }
        }
        return result;
    }
};
