class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> mp;
        int n = nums.size();
        mp[0] = -1;
        int sum = 0;

        for(int i = 0; i < n; i++) {

            sum = sum + nums[i];

            int rem = sum % k;

            if(mp.count(rem)) {
                if(i - mp[rem] >= 2)
                    return true;
            }
            else {
                mp[rem] = i;
            }
        }

        return false;
    }
};