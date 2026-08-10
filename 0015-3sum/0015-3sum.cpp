class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
 
      for(int i = 0; i<nums.size(); i++){
        int left = i+1;
        int right = nums.size()-1;
        
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

      while(left<right){
        if(nums[left]+nums[i]+nums[right]==0){
             ans.push_back({nums[left], nums[i], nums[right]});
             while(left<right && nums[left]==nums[left+1]){
                left++;
             }
             while(right>left && nums[right]==nums[right-1]){
                right--;
             }
             left++;
             right--;
        }
        else if(nums[left]+nums[i]+nums[right] < 0){
            left++;
        }
        else{
            right--;
        }
      }

      }
      return ans;
    }
};