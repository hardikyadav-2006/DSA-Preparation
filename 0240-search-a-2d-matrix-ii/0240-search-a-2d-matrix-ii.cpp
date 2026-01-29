class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int r = row-1;
        int c = 0;
        while(r>=0 && c<col){
            int mid = matrix[r][c];
            if(mid == target){
                return true;
            }else if(mid < target){
                c++;
            }else{
                r--;
            }
        }
        return false;

    }
};