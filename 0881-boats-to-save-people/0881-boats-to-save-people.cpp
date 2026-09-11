class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int boat = 0;
        sort(people.begin(),people.end());
        int low = 0;
        int high = n-1;
        while(low <= high){
            if(people[low] + people[high] <= limit){
                low++;
                high --;
            }
            else {
                high --;
            }
            boat ++;
        }
        return boat;
    }
};