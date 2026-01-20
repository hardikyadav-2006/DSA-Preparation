class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size()-1;
        for(int j = 0; j<(n+1)/2; j++){
            for(int i = j; i<n-j; i++){
                swap(matrix[j][i], matrix[i][n-j]);
                swap(matrix[n-i][j], matrix[n-j][n-i]);
                swap(matrix[j][i], matrix[n-j][n-i]);
            }
        }
        
        
    }
};