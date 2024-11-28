class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sol;

        for (int i = 0; i < nums.size(); i++) {
            int toFind = target - nums[i];
            
            if (sol.find(toFind) != 0) {
                return {i, sol[toFind]};
            } else {
                sol[nums[i]] = i;
            }
        }

        return {-1, -1};
    }
};
