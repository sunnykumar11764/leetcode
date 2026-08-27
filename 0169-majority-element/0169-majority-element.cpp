class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int , int>m;
        vector<int> ans;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(m.count(nums[i])){
                m[nums[i]]++;
            }
            else {
                m[nums[i]] = 1;
            }
        }
        for(pair<int , int>p : m){
            if(p.second > n/2){
                return p.first;
            }
        }
        return -1;
        
    }
};