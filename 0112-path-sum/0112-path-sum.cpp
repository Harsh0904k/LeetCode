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
    void check(TreeNode* root,vector<int>& path, int target, bool& ans, int sum){
        if(root==nullptr){
            return;
        }
        sum = sum+root->val;
        
        if(root->left == NULL && root->right == NULL){
            if(sum==target){
                ans = true;
            }
        }
       check(root->left,path,target,ans,sum);
       check(root->right,path,target,ans,sum);
        sum = sum-root->val;

        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        vector<int>path;
        bool ans = false;
        int sum = 0;
        check(root,path,targetSum,ans,sum);
        return ans;
    }
};