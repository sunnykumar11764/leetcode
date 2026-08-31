class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n =s1.size();
        if(n > s2.size()){
            return false;
        }
        vector<int> freq1(26,0);
        for(char ch: s1){
            freq1[ch-'a']++;
        }
         vector<int> freq2(26,0);
        for(int i =0; i<n; i++){
            freq2[s2[i]-'a']++;
        }
        if(freq1 == freq2){
            return true;
        }
        // sliding window
        for(int i = n; i< s2.size(); i++){
            //new char add
            freq2[s2[i]-'a']++;
            //old char remove
            freq2[s2[i-n]-'a']--;
            if(freq1 == freq2){
                return true;
            }

        }
        return false;
    }
};