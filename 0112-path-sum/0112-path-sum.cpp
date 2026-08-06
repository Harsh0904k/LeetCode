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
    void check(TreeNode* root,vector<int>path, int target, bool& ans){
        if(root==nullptr){
            return;
        }
        int sum = 0;
        path.push_back(root->val);
        
        if(root->left == NULL && root->right == NULL){
            for(int x:path){
            sum = sum+x;
            }
            if(sum==target){
                ans = true;
            }
        }
       check(root->left,path,target,ans);
       check(root->right,path,target,ans);
        path.pop_back();

        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        vector<int>path;
        bool ans = false;
        check(root,path,targetSum,ans);
        return ans;
    }
};