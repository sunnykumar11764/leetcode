class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp;
        
        mp[0] = 1;
        int n = nums.size();
        
        int count = 0;
        int sum = 0;
        
        for(int i = 0; i < n; i++) {
            
            // Odd = 1, Even = 0
            if(nums[i] % 2 == 1)
                sum++;
            
            if(mp.count(sum - k))
                count += mp[sum - k];
            
            mp[sum]++;
        }
        
        return count ;
    }
};