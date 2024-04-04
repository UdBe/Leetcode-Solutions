class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n  = nums.size(); 
        vector<int> answer;
        bool flag = false; 
        for (int i = 0; i < n; i++){
            if (flag){
                break; 
            }
            for (int j = 0; j < n; j++){
                if (j==i){
                    continue;
                } else if(nums[i] + nums[j] == target) {
                    answer.push_back(i);
                    answer.push_back(j);
                    flag = true; 
                    break;   
                } 
            }
        }
        return answer;
    }
};