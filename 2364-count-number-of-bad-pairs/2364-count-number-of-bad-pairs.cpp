class Solution {
public:
    long long countBadPairs(vector<int>& nums) {

        long long n = nums.size();

        long long totalPairs = n * (n - 1) / 2;

        unordered_map<long long, long long> mp;

        long long goodPairs = 0;

        for(int i = 0; i < n; i++) {

            long long key = i - nums[i];

            goodPairs += mp[key];

            mp[key]++;
        }

        return totalPairs - goodPairs;
    }
};