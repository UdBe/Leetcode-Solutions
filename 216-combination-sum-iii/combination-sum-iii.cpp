class Solution {
public:
    void solve(int k, int n, vector<vector<int>>& ans, vector<int> nums, vector<int> current, int sum, int index){
        //Base Case
        if(current.size()==k){
            if (sum == n){
                ans.push_back(current); 
                return; 
            } else {
                return; 
            }
        }
        if(current.size()>k || index >= nums.size()){
            return; 
        }

        //Recursion
        
        solve(k,n, ans, nums, current, sum, index+1);

        current.push_back(nums[index]); 
        solve(k,n, ans, nums, current, sum+nums[index], index+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums = {1,2,3,4,5,6,7,8,9}; 
        vector<vector<int>> ans;
        vector<int> current;
        solve(k,n, ans, nums, current, 0, 0);        
        return ans;
    }
};