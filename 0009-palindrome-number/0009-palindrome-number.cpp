class Solution {
public:
    bool isPalindrome(int x) {

        string s = to_string(x);

        int n = s.size();
        int st = 0;
        int end = n - 1;

        while (st < end) {

            if (s[st] != s[end]) {
                return false;
            }

            st++;
            end--;
        }

        return true;
    }
};