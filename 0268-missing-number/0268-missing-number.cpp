class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map <int,int> val;
        for(int i = 0; i<=nums.size(); i++){
            val[i]++;
        }
        for(int i = 0; i<nums.size(); i++){
            val[nums[i]]++;
            
        }
        for(auto x : val){
            if(x.second == 1){
                return x.first;  
              }
        }
        return -1;
    }
};