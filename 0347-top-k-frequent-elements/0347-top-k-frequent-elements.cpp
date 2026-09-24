class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> mp;

        // Frequency count
        for(int el : nums) {
            mp[el]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);

        for(auto x : mp) {
            bucket[x.second].push_back(x.first);
        }

        vector<int> ans;

        for(int i = nums.size(); i >= 1 && ans.size() < k; i--) {

            for(int el : bucket[i]) {
                ans.push_back(el);

                if(ans.size() == k)
                    break;
            }
        }

        return ans;
    }
};