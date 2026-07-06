class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,vector<int>> duplicate;
        for(int i = 0; i<nums.size(); i++){
            duplicate[nums[i]].push_back(i);
        }
        for(auto x: duplicate){
            if(x.second.size()>1){
                for(int i=1; i<x.second.size();i++){

                        if(abs(x.second[i]-x.second[i-1])<=k){
                            return true;
                        }

                    
                }
            }
        }
        return false;
    }
};