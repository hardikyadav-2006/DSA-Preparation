class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        for(int i = 0; i<row; i++){
            int st = 0;
            int end = col-1;
            if(target<matrix[i][0] || target > matrix[i][col-1]){
                continue;
            }
            while(st<=end){
                int mid = (st+end)/2;
                if(matrix[i][mid] == target){
                    return true;
                }else if(matrix[i][mid] > target){
                    end = mid-1;
                }else{
                    st = mid+1;
                }
            }
        }
        return false;
        
    }
};