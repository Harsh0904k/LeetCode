class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>a;
        int min = nums[0];
        int max = 0;
        unordered_map<int,int>n;
        for(int i = 0; i<nums.size(); i++){
            n[nums[i]]++;
            if(nums[i]<min){
                min = nums[i];
            }
            if(nums[i]>max){
                max = nums[i];
            }
        }  

        for(int i = min; i<=max;i++){
            cout<<i;
            n[i]++;
        }
        
    for(auto x : n){
        if(x.second<2){
            a.push_back(x.first);
        }
    }
    sort(a.begin(),a.end());
    return a;
    }
};