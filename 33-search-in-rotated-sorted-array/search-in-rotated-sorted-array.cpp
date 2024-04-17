class Solution {
public:
    int findPivotElement(vector<int>& nums) {
        int n = nums.size();
        int start = 1;
        int end = n - 1;
        int mid = (start + end) / 2;

        while (start < end) {
            if (nums[mid] > nums[mid + 1]) {
                return mid;
            } else if (nums[mid] < nums[mid - 1]) {
                return (mid - 1);
            } else if (nums[mid] > nums[0]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
            mid = (start + end) / 2;
        }
        return 0;
    }

    int search(vector<int>& nums, int target) {

        int n = nums.size();
        int start = 0;
        int end = n - 1;

        int pivot = findPivotElement(nums);
        cout << "pivot: " << pivot;

        if (target <= nums[pivot] && target >= nums[0]) {
            start = 0;
            end = pivot;
        } else {
            start = pivot + 1;
            end = n - 1;
        }

        int mid = (start + end) / 2;

        while (start <= end) {
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
            mid = (start + end) / 2;
        }
        return -1;
    }
};