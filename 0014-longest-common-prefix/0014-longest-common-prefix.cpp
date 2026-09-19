class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];

        for(int i = 0; i < ans.length(); i++) {

            for(int j = 1; j < strs.size(); j++) {

                if(i >= strs[j].length() || strs[j][i] != ans[i]) {
                    return ans.substr(0, i);
                }
            }
        }

        return ans; 
    }
};