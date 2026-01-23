class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> PS;
        int sum = 0;
        int n = nums.size();
        int count = 0;
        for(int i = 0;i<n; i++){
            sum += nums[i];
            if(sum == k){
                count++;
            }
            PS.push_back(sum);
        }

        unordered_map<int, int> m;
        for(int j=0; j<n; j++){
            if(m.find(PS[j]-k) != m.end()){
                count += m[PS[j]-k];
            }
            if(m.find(PS[j]) == m.end()){
                m.emplace(PS[j],1);
            }else{
                m[PS[j]] += 1;
            }
            

        }
        return count;
        
    }
};