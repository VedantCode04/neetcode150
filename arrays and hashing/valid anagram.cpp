class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26] = {0};
        for (auto& a : s) {
            arr[a - 97]++;
        }

        for (auto& a : t) {
            arr[a - 97]--;
        }

        for (int i = 0; i < 26; i++) {
            if (arr[i]) {
                return false;
            }
        }

        return true;
    }
};
