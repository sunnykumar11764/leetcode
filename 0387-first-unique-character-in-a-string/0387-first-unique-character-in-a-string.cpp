class Solution {
public:
    int firstUniqChar(string s) {

        unordered_map<char, int> mp;

        // Step 1: Frequency count
        for(char ch : s) {
            mp[ch]++;
        }

        // Step 2: First unique character
        for(int i = 0; i < s.length(); i++) {

            if(mp[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};

