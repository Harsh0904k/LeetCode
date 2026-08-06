class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int> n;
        for(int i = 1; i<=nums.size(); i++){
            n[i]++;
        }
        for(int i = 0; i<nums.size(); i++){
            n[nums[i]]++;
        }

        for(auto x:n){
            if(x.second<2){
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};