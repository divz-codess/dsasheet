class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size() - 1;

        while (l <= h) {
            int mid = (l + h) / 2;
            
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }

        l = 0;
        h = nums.size() - 1;

        while (l <= h) {
            int mid = (l + h) / 2;

            if (nums[mid] < target && (mid + 1 >= nums.size() || nums[mid + 1] > target)) {
                return mid + 1;
            } else if (nums[mid] < target) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }

        return 0; // or any other appropriate default value
    }
};
