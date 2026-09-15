class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        reverse(nums.begin(), nums.end());

/*     for(int i : nums){
           cout<<i<<" ";
            }
        cout<<endl;
*/
        reverse(nums.begin(), nums.begin() + k);
/*
        for(int i : nums){
            cout<<i<<" ";
            }
        cout<<endl;
*/
        reverse(nums.begin() + k, nums.end());
/*
        for(int i : nums){
            cout<<i<<" ";
            }
        cout<<endl;
 */       
    }
};
