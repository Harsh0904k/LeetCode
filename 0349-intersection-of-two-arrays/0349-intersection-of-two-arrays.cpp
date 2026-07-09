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
            if( intersection.count(y)==1 ){  // will check if key is present
                 value.push_back(y); 
                 intersection.erase(y);  // will delete whole (key and value) so it dont get added again
            }
            else{
                continue;
            }
        }
       
        
       return value; 
    }
};