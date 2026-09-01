class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char,int> freq;
        int max_length = 0;
        int left = 0;
        for(int right=0; right<n; right++){
            int curr_ch = s[right];
            freq[curr_ch]++;
            while(freq[curr_ch] > 1){
                freq[s[left]]--;
                left++;
            }
            max_length = max(max_length, right - left + 1); 
        }
        return max_length;
    }
};