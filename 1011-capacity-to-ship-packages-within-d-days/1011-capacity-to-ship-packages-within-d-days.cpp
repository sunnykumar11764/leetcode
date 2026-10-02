class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int n = weights.size();

        int st = 0;
        int end = 0;

        for(int i =0; i<n; i++){
            end = max(end , weights[i]);
            st += weights[i];
        }

        while (end <= st) {

            int mid = (end + st) / 2;

            int day = 1;
            int sum = 0;

            for(int i =0; i<n; i++){
                if (sum + weights[i] <= mid) {
                    sum += weights[i];
                }
                else {
                    day++;
                    sum = weights[i];
                }
            }
            if (day <= days) {
                st = mid - 1;
            }
    
            else {
             end = mid + 1;
            }
        }

        return end;
    }
};