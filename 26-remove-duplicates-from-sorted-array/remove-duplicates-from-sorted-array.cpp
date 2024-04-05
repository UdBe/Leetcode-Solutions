class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0){
            return 0; 
        }

        int u = 0; 

        for(int c = 1; c < nums.size(); c++){
            if (nums[c] != nums[u]){
                nums[u+1] = nums[c];
                u++;
            }
        }

        return (u + 1);
    }
};
