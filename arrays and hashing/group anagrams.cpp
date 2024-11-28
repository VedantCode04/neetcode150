class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& a) {
        if (a.size() == 1)
            return {a};

        vector<vector<string>> result;
        map<vector<int>, vector<string>> sol;

        for (auto str : a) {
            vector freq(26, 0);

            for (auto ch : str) {
                freq[ch - 97]++;
            }
            sol[freq].push_back(str);
        }

        for (auto [key, val] : sol) {
            result.push_back(val);
        }

        return result;
    }
};
