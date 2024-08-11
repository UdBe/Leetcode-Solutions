class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int pos = 0;
        int neg = 1;
        int i = 0;
        vector<int> ans(nums.size(), 0);

        while (i < nums.size()) {
            if (nums[i] >= 0) {
                ans[pos] = nums[i];
                pos += 2;
            } else {
                ans[neg] = nums[i];
                neg += 2;
            }
            i++;
        }

        return ans;
    }
};