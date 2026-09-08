class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        mp[0] = 1;
        int sum = 0; 
        int count = 0;
        int n = nums.size();
        for(int i=0; i<n ; i++){
            sum = sum + nums[i];
            int rem = sum % k;
            if(rem < 0)
                rem = rem + k;
            
            if(mp.count(rem))
                count = count + mp[rem];
                mp[rem]++;
            
        }
        return count ;
        
    }
};