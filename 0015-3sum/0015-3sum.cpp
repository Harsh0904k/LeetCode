class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int fixed = 0;
        vector<vector<int>> final;
        sort(nums.begin(), nums.end());

        for(fixed = 0; fixed<nums.size()-2; fixed++){
            if (fixed > 0 && nums[fixed] == nums[fixed - 1]) 
                continue;

        int left = fixed + 1;
        int right = nums.size() - 1;

          cout<<"for loop"<<endl;

            while(left<right){
            
                  
                if( nums[fixed] + nums[left] + nums[right] < 0){
                    left++;
                    
                }

                else if(nums[fixed] + nums[left] + nums[right] > 0){
                    right--;
                
                }

                else{
                    final.push_back({nums[fixed], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1])
                        left++;

                    while (left < right && nums[right] == nums[right - 1])
                        right--;

                    left++;
                    right--;
                    cout<<"ran 1"<<endl;   
                }



            }
        }
        
    
        return final;

        
    }
};