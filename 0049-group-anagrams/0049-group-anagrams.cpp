class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for(string s : strs) {

            string key = s;

            // String ko sort karo
            sort(key.begin(), key.end());

            // Same key wale strings ek group mein
            mp[key].push_back(s);
        }

        vector<vector<string>> ans;

        // Map ke groups answer mein daalo
        for(auto x : mp) {
            ans.push_back(x.second);
        }

        return ans;
    }
};