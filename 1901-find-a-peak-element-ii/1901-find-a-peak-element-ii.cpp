class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        vector<int> res;

        int st = 0;
        int end = col-1;
        int max_row = -1;
        int max_el = INT_MIN;
        while(st<=end){
            int mid = (st+end)/2;
            for(int i = 0; i<row; i++){
                if(mat[i][mid] > max_el){
                    max_el = mat[i][mid];
                    max_row = i;
                }
            }

            int left = (mid == 0) ? -1 : mat[max_row][mid-1];
            int right = (mid == col-1) ? -1 : mat[max_row][mid+1];

            if(mat[max_row][mid] > left && mat[max_row][mid]>right){
                return {max_row, mid};
            }else if(mat[max_row][mid] < right){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        return {-1,-1};
        
        
    }
};