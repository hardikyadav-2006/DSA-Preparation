class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if(n <= 0) return s;
        bool found = false;
        int start = 0;
        int end = 0;
        string tmp = "";
        for(int i = 0; i<n; i++){
            int odd = expand_arr(s, i, i);
            int even = expand_arr(s,i,i+1);
            int max_len = max(even, odd);

            if(max_len > end - start){
                start = i-(max_len-1)/2;
                end = i +  max_len/2;
            }

            
        }
        return s.substr(start, end - start+1);
    }
        

    int expand_arr(string s, int left, int right){
        int n = s.size();
        while(left>=0 && right<n && s[left] == s[right]){
            left--;
            right++;
        }
        return right-left-1;
    }
        
    
};