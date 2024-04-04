class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Negative Marking Method
        for(int i = 0; i < nums.size(); i++){
            int index = abs(nums[i]);
            if (nums[index] < 0){
                return index; 
            } else {
                nums[index] = nums[index] * (-1); 
            }
        }
        return -1;
    }
};