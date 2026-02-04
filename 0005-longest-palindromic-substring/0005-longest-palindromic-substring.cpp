class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if(n==0 || n==1) return s;
        int start = 0;
        int end = 0;
        for(int i = 0;i<n; i++){
            int odd = expand(s,i,i);
            int even = expand(s,i,i+1);
            int res = max(odd, even);

            if(res>end-start){
                start = i-((res-1)/2);
                end = i+(res/2);

            }
            


        }
        return s.substr(start, end-start+1);
        
    }

    int expand(string s, int left, int right){
        int n = s.size();
        while(left>=0 &&right<n && s[left] == s[right]){
            left--;
            right++;
        }
        return right-left-1;
        
    }
};