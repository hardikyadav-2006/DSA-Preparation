class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        vector<int> res;

        int st = 0;
        int end = col-1;
        while(st<=end){
            int mid = (st+end)/2;
            int max_row = -1;
            int tmp = INT_MIN;
            for(int i = 0; i<row; i++){
                if (tmp<mat[i][mid]){
                    tmp = mat[i][mid];
                    max_row = i;
                }
            }

            int left = (mid >0) ? mat[max_row][mid-1]: -1;
            int right = (mid<col-1) ? mat[max_row][mid+1] : -1;

            if(mat[max_row][mid]>left && mat[max_row][mid] >right){
                res.push_back(max_row);
                res.push_back(mid);
                return res;
            }else if(mat[max_row][mid]<right){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        return {-1,-1};


        
        
    }
};