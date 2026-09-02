class Solution {
public:
    int maxVowels(string s, int k) {

        int left = 0;
        int vowelCount = 0;
        int ans = 0;

        for(int right = 0; right < s.size(); right++) {

            // Add new character
            if(s[right] == 'a' || s[right] == 'e' ||
               s[right] == 'i' || s[right] == 'o' ||
               s[right] == 'u') {
                vowelCount++;
            }

            // Window size becomes k
            if(right - left + 1 == k) {

                ans = max(ans, vowelCount);

                // Remove left character
                if(s[left] == 'a' || s[left] == 'e' ||
                   s[left] == 'i' || s[left] == 'o' ||
                   s[left] == 'u') {
                    vowelCount--;
                }

                left++;
            }
        }

        return ans;
    }
};