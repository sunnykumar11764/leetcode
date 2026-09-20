class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;
        for(int el: nums1){
            s.insert(el);
        }
        vector<int> ans;
        
        for(int el: nums2){
            if(s.find(el) != s.end()){ // found
           ans.push_back(el);
                s.erase(el);
            }
        }
        return ans;

    }
};