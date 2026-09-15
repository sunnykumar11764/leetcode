class Solution {
public:
    int minOperations(vector<int>& nums) {

        unordered_map<int, int> mp;
        int n = nums.size();

        // Har number ki frequency count karo
        for(int i=0; i<n; i++) {
            mp[nums[i]]++;
        }

        int ans = 0;

        // Har number ki frequency check karo
        for(auto x : mp) {

            int freq = x.second;

            // Agar sirf 1 baar aaya
            if(freq == 1) {
                return -1;
            }

            // 3-3 ke group banao
            ans += freq / 3;

            // Agar 1 ya 2 bach gaya
            if(freq % 3 != 0) {
                ans++;
            }
        }

        return ans;
    }
};