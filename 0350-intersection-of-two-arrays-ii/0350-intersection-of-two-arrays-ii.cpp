class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> n1;
        unordered_map<int,int> n2;
        vector<int> result;
        for(int x : nums1){
            n1[x]++;
        }
        for(int x : nums2){
            n2[x]++;
        }
        for(auto x : n1){
            cout<<x.first<<endl;
            cout<<x.second<<endl;

            cout<<endl;
            cout<<n2[x.first]<<endl;
            cout<<endl;
            if(x.second > n2[x.first]){
                for(int i = 0; i<n2[x.first]; i++){
                    result.push_back(x.first);
                    cout<<"r1";
                }
            }
            else if(x.second <= n2[x.first]){
                for(int i = 0; i<x.second; i++){
                    result.push_back(x.first);
                    cout<<"r2";
                }
            }
        }
        return result;
    }
};