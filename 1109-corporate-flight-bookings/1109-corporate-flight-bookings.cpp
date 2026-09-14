class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {

        vector<int> ans(n + 2, 0);

        for(auto booking : bookings) {

            int start = booking[0];
            int end = booking[1];
            int seats = booking[2];

            ans[start] += seats;
            ans[end + 1] -= seats;
        }

        for(int i = 1; i <= n; i++) {
            ans[i] += ans[i - 1];
        }

        vector<int> result(n);

        for(int i = 1; i <= n; i++) {
            result[i - 1] = ans[i];
        }

        return result;
    }
};