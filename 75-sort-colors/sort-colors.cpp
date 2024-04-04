class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size(); 
        int l = 0, m = 0, h = n - 1; 

        for(int i = 0; i < n; i++){
            if(nums[m]==0){
                swap(nums[m],nums[l]);
                m++;
                l++;
            } else if(nums[m]==2){
                swap(nums[m],nums[h]);
                h--; 
            } else {
                m++; 
            }
        }
    }
};