class Solution {
public:

    int binarySearch(vector<int>& nums, int si, int ei, int target) {

        // Base condition
        if(si > ei) {
            return -1;
        }

        int mid = si + (ei - si) / 2;

        // Target found
        if(nums[mid] == target) {
            return mid;
        }

        // Left half is sorted
        if(nums[si] <= nums[mid]) {

            if(nums[si] <= target && target < nums[mid]) {
                return binarySearch(nums, si, mid - 1, target);
            }
            else {
                return binarySearch(nums, mid + 1, ei, target);
            }
        }

        // Right half is sorted
        else {

            if(nums[mid] < target && target <= nums[ei]) {
                return binarySearch(nums, mid + 1, ei, target);
            }
            else {
                return binarySearch(nums, si, mid - 1, target);
            }
        }
    }

    int search(vector<int>& nums, int target) {

        int si = 0;
        int ei = nums.size() - 1;

        return binarySearch(nums, si, ei, target);
    }
};