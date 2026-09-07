class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> map;
    
        for(int i = 0; i<nums.size();i++){
            if(map.contains(target - nums[i])){
                cout<<"ran1";
                ans.push_back(i);
                for(auto x:map){
                    if(x.first == target - nums[i]){
                        ans.push_back(x.second);
                       return ans;
                    }
                }
            }
            cout<<"ran2";
            map[nums[i]] = i;
        }
        return ans;
    }
};