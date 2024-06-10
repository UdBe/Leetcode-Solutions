class Solution {
public:

    void solve(vector<vector<int>>& answer, vector<int> combination,
               vector<int> candidates, int target, int i) {

        // Base Case
        if(target == 0){
            answer.push_back(combination);
            return; 
        }

        if(target < 0 || i == candidates.size()){
            return;
        }
        
        //Recursive Calls
        solve(answer, combination, candidates, target, i + 1);
        if (candidates[i] <= target) {
            combination.push_back(candidates[i]);
            solve(answer, combination, candidates, target - candidates[i], i);
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> answer;
        vector<int> combination;

        solve(answer, combination, candidates, target, 0);
        return answer;
    }
};