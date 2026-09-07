class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
    
        for(int i = 0; i<nums.size();i++){
            if(map.contains(target - nums[i])){
                for(auto x:map){
                    if(x.first == target - nums[i]){
                       return {i,x.second};
                    }
                }
            }
            map[nums[i]] = i;
        }
        return {};
    }
};