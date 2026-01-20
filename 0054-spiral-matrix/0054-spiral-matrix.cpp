class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int r = 0, c = 0;
        int m = matrix.size(), n = matrix[0].size();
        int rupbound = m, cupbound = n;
        int rlowbound = -1, clowbound = -1;
        while(cupbound != clowbound +1 || rlowbound +1 != rupbound){
            while(c < cupbound){
                res.push_back( matrix[r][c]);
                c++;
            }
            c--;
            rlowbound++;
            if(cupbound ==clowbound +1 || rlowbound +1 == rupbound){
                break;
            }
            r++;
            while(r < rupbound){
                res.push_back( matrix[r][c]);
                r++;
            }
            r--;
            cupbound--;
            if(cupbound ==clowbound +1 || rlowbound +1 == rupbound){
                break;
            }
            c--;
            while(c > clowbound){
                res.push_back( matrix[r][c]);
                c--;
            }
            c++;
            rupbound--;
            if(cupbound ==clowbound +1 || rlowbound +1 == rupbound){
                break;
            }
            r--;
            while(r > rlowbound){
                res.push_back( matrix[r][c]);
                r--;
            }
            r++;
            clowbound++;
            c++;

        }
        return res;

        
    }
};