class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> majority;
        for(int i=0; i<nums.size(); i++){
            majority[nums[i]]++;
        }

        for(auto x: majority){
            if(x.second>nums.size()/2){
                return x.first;
            }
        }

return 0;
        
    }
};