class Solution {
public:
    int firstUniqChar(string s) {

        unordered_map<char, int> mp;
        int n = s.size();

        // Step 1: Frequency count
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }

        // Step 2: First unique character
        for(int i = 0; i<n; i++) {

            if(mp[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};

