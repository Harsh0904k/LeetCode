class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0;

        while(left<nums.size()){
            for(int i = left; i<nums.size();i++){
                if(nums[i]==0){
                    swap(nums[left],nums[i]);
                    left++;
                    
                }
            }

            for(int i = left; i<nums.size();i++){
                if(nums[i]==1){
                    swap(nums[left],nums[i]);
                    left++;
                    
                }
            }

            for(int i = left; i<nums.size();i++){
                if(nums[i]==2){
                    swap(nums[left],nums[i]);
                    left++;
                    
                }
            }

        }
        
    }
};