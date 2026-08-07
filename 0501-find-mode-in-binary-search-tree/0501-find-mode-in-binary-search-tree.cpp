/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void Mode(TreeNode* root, vector<int>& nums){
        if(root == NULL){
            return;
        }
        nums.push_back(root->val);
        Mode(root->left, nums);
        Mode(root->right, nums);

    return;        

    }
    vector<int> findMode(TreeNode* root) {
        vector<int> nums;
        vector<int>ans;
        
        int mode = 0;
        int i = 0;
        Mode(root, nums);
        sort(nums.begin(), nums.end());
        while(i < nums.size()){
            int j = i+1;
            int count = 1;
            while(j<nums.size() && nums[i] == nums[j]){
                count++;
                j++;
            }
            if(count>mode){
               ans.clear();
                mode = count;
                ans.push_back(nums[i]);
            }
            else if(count==mode){
                ans.push_back(nums[i]);
            }
            i=j;

        }
        return ans;
    }
};