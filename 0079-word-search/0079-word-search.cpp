class Solution {
public:
    bool helper(vector<vector<char>>& board, string& word, int row, int col, int i){
        int p = word.size();
        int m = board.size();
        int n = board[0].size();
        if(i==p){
            return true;
        }
        board[row][col] = '.';
        if(col-1>=0 && board[row][col-1] == word[i]){
            if(helper(board, word, row, col-1, i+1)) return true;
        }
        if(row-1>=0 && board[row-1][col] == word[i]){
            if(helper(board, word, row-1, col, i+1)) return true;
        }
        if(col+1<n && board[row][col+1] == word[i]){
            if(helper(board, word, row, col+1, i+1)) return true;
        }
        if(row+1<m && board[row+1][col] == word[i]){
            if(helper(board, word, row+1, col, i+1)) return true;
        }
        board[row][col] = word[i-1];
        return false;

    }
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(board[i][j]==word[0]){
                    if(helper(board, word, i, j, 1)) return true;

                }
                
            }
        }
        return false;
        
    }

};