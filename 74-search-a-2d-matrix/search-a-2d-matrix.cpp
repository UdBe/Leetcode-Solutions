class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int rownumber = matrix.size() - 1; 
        bool ans = false; 

        for (int i = 1; i < matrix.size(); i++){
            if (target < matrix[i][0]){
                rownumber = i - 1; 
                break; 
            }
        }

        for  (int i = 0; i < matrix[0].size(); i++)      
        {
            if (target == matrix[rownumber][i]){
                return true; 
            }
        }

        return false; 


    }
};