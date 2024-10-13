class Solution {
public:

    void solve(vector<int>& nums, vector<vector<int>>& ans, vector<int> current, int index){

        //Base Case
        ans.push_back(current);

        //Recursion
        for(int i = index; i < nums.size(); i++){
            if (i > index && nums[i] == nums[i-1]) continue; 
            current.push_back(nums[i]);
            solve(nums, ans, current, i+1); 
            current.pop_back(); 
        }

    } 
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 

        vector<vector<int>> ans; 
        vector<int> current; 
        
        solve(nums, ans, current,0); 
        
        return ans; 
    }
};