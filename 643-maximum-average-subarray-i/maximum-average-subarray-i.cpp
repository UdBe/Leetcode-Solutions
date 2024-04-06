class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double sum = 0;
        double average = INT_MIN; 

        for(int i = 0; i <k; i++){
            sum+=nums[i];
        }
        if (sum/k > average) average = sum/k; 

        int l = 0; 
        for (int j = k; j < nums.size(); j++){
            sum = sum - nums[l] + nums[j];
            if (sum/k > average) average = sum/k; 
            l++;
        }
        return average; 
    }

};