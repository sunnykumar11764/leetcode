class Solution {
public:
    bool wordPattern(string pattern, string s) {

        unordered_map<char, string> mp;
        unordered_map<string, char> check;

        stringstream ss(s);
        string word;

        for(char ch : pattern) {

            ss >> word;

            if(mp.count(ch)) {
                if(mp[ch] != word)
                    return false;
            }

            if(check.count(word)) {
                if(check[word] != ch)
                    return false;
            }

            mp[ch] = word;
            check[word] = ch;
        }

        if(ss >> word)
            return false;

        return true;
    }
};