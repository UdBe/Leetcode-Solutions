class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
    //--
    int size = arr.size();
   
    int s = 0;
    int e = size - 1; 
    int m = s + (e - s)/2; 
    int l = -1;
    int r = -1;

    while (s <= e){
        if (arr[m] == target){
            l = m;
            e = m  - 1; 
        } else if( arr[m] < target){
            s = m + 1;
        } else if (arr[m] > target){
            e = m - 1;
        }
        m = s + (e - s)/2;
    } 

        s = 0;
        e = size - 1; 
        m = s + (e - s)/2;

        while (s <= e){
        if (arr[m] == target){
            r = m;
            s = m  + 1 ; 
        } else if( arr[m] < target){
            s = m + 1;
        } else if (arr[m] > target){
            e = m - 1;
        }
        m = s + (e - s)/2;
    } 
        vector<int> answer; 
        answer.push_back(l);
        answer.push_back(r);

        return answer; 
        
    }
};;