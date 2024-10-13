//Om
class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int> nums, vector<int> subset, int i) {
        
        // Base Case

        if (i == nums.size()){
            ans.push_back(subset);
            return;
        }

        subset.push_back(nums[i]);
        solve(ans, nums, subset, i + 1);
        subset.pop_back();
        solve(ans, nums, subset, i + 1);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> subset; 
        solve(answer, nums, subset, 0);
        return answer;
    }
};