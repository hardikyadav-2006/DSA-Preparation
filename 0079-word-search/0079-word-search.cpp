class Solution {
public:
    bool helper(vector<vector<char>>& board, string& word, int i, int j, int k){
        int row = board.size();
        int col = board[0].size();
        int n = word.size();
        if(k==n-1 ){
            return true;
        }
        board[i][j] = '.';
        if( j-1>=0 && board[i][j-1] == word[k+1]){            
            if (helper(board, word, i, j-1, k+1)) return true;            
        }
        if(i-1>=0 && board[i-1][j] == word[k+1]){            
            if (helper(board, word, i-1, j, k+1)) return true;            
        }
        if(j+1<col && board[i][j+1] == word[k+1]){            
            if (helper(board, word, i, j+1, k+1)) return true;            
        }
        if(i+1<row && board[i+1][j] == word[k+1]){            
            if (helper(board, word, i+ 1, j, k+1)) return true;            
        }
        board[i][j] = word[k];
        return false;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size();
        int col = board[0].size();
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(board[i][j] == word[0]){
                    if(helper(board, word, i, j, 0)) return true;
                }
            }
        }
        return false; 
    }
};