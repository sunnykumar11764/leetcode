class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        if (p.size() > s.size())
            return ans;

        unordered_map<char, int> mp1, mp2;

        // p ki frequency
        for (char ch : p) {
            mp1[ch]++;
        }

        int k = p.size();

        // First window
        for (int i = 0; i < k; i++) {
            mp2[s[i]]++;
        }

        // Sliding window
        for (int i = k; i <= s.size(); i++) {

            if (mp1 == mp2) {
                ans.push_back(i - k);
            }

            // Left character remove
            mp2[s[i - k]]--;

            if (mp2[s[i - k]] == 0) {
                mp2.erase(s[i - k]);
            }

            // Right character add
            if (i < s.size()) {
                mp2[s[i]]++;
            }
        }

        return ans;
    }
};