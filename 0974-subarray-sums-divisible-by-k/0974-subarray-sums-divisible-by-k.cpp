class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> freq(k, 0);

        freq[0] = 1;

        int sum = 0;
        int count = 0;
        int n = nums.size();

        for(int i=0; i<n; i++) {
            sum += nums[i];

            int rem = sum % k;

            if(rem < 0)
                rem += k;

            count += freq[rem];

            freq[rem]++;
        }

        return count;
    }
};