class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>a;
        int min = nums[0];
        int max = 0;
        bool check = false;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]<min){
                min = nums[i];
            }
            if(nums[i]>max){
                max = nums[i];
            }
        }
        for(int i = min; i<max; i++){
            for(int j = 0; j<nums.size(); j++){
                if(i==nums[j]){
                    check = true;
                }
            }
            if(check==false){
                a.push_back(i);
            }
            check = false;
        }
        return a;
    }
};