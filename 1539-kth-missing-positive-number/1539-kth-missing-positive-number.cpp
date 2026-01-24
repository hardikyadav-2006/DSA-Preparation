class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int miss = 1;
        int count = 0;
        int n = arr.size();
        int i = 0;
        while(count < k){
            if(arr[i] != miss){
                count++;
                miss++;
            }
           
            else if(arr[i] == miss){
                miss++;
                if(i+1 <n){
                    i++;
                }
            }
        }

        return miss-1;
        
    }
};