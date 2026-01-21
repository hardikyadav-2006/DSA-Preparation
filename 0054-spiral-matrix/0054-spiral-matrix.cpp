class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int st_cols = 0;
        int st_rows = 0;
        int end_rows = matrix.size()-1;
        int end_cols = matrix[0].size() - 1;
        vector<int> res;

        while(st_rows <= end_rows && st_cols <= end_rows){
            for(int i = st_cols; i<=end_cols; i++){
                res.push_back(matrix[st_rows][i]);
            }
            st_rows++;

            for(int i = st_rows; i<=end_rows; i++){
                res.push_back(matrix[i][end_cols]);
            }
            end_cols --;


            if(st_rows < end_rows){
                for(int i = end_cols; i>=st_cols; i--){
                    res.push_back(matrix[end_rows][i]);
                }
                end_rows--;
            }
            if(st_cols < end_cols){
                for(int i = end_rows; i>=st_rows; i--){
                    res.push_back(matrix[i][st_cols]);
                }
                st_cols++;
            }
        }
        return res;
        
    }
};