class Solution {
public:
    int missingNumber(vector<int>& nums) {
    
        int x=0;
        while(x <= nums.size()){
          if(find(nums.begin(), nums.end(),x) != nums.end())
          {
            x++;
            continue;
            }
            else{

                return x;
            }
            
            x++;
    
        }
        return 0;
    }
};