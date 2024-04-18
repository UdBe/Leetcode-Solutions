class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count = 0;
        sort(nums.begin(), nums.end());
        set<pair<int, int>> solution;
        for (int i = 0; i < nums.size(); i++) {
            int start = i+1;
            int end = nums.size() - 1;
            int mid = (start + end) / 2;

            while (start <= end) {
                if (nums[mid] - nums[i] == k) {
                    solution.insert({nums[i],nums[mid]});
                    break;
                } else if (nums[mid] - nums[i] > k) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
                mid = (start + end) / 2;
            }
        }

        return solution.size();
    }
};