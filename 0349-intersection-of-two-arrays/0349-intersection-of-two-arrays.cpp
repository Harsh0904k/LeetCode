class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> value;
        unordered_map<int, int> intersection;
        for(int x : nums1){
            if(intersection.count(x)){
                continue;
            }
            else{
            intersection[x]++;
            }
        }
        for(int y : nums2){
            if(intersection.count(y)<2 && intersection.count(y)==1 ){
                intersection[y]++;
            }
            else{
                continue;
            }
        }
        for(auto x : intersection){
            if(x.second>1){
                value.push_back(x.first);
            }
        }
        
       return value; 
    }
};