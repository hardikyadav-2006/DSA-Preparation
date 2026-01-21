class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        set<int> s_row;
        set<int> s_col;
        for(int i = 0;i<m; i++){
            for(int j = 0; j<n;j++){
                if(matrix[i][j]==0){
                    s_row.insert(i);
                    s_col.insert(j);

                }
            }
        }
        for(auto i : s_row){
            for(int j = 0;j<n; j++){
                matrix[i][j] = 0;
            }
        }

        for(auto i : s_col){
            for(int j = 0;j<m; j++){
                matrix[j][i] = 0;
            }
        }

        
        
    }
};