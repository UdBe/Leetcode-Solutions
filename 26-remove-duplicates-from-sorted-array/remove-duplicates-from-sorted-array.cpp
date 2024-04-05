class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int c = 1;
        int u = 0;

        while (c < nums.size()) {
            if (nums[c] != nums[u]) {
                nums[u+1] = nums[c];
                u++;
                c++;
            } else {
                c++;
            }
        }

        return (u + 1);
    }
};
