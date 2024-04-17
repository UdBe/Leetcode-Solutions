class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end()); 
        set<pair<int,int>> solution; 
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j < nums.size(); j++) {
                if (i == j) {
                    continue;
                } else if (abs(nums[i] - nums[j]) == k) {
                    solution.insert({nums[i],nums[j]}); 
                }
            }
        }
        return solution.size();
    }
}
;