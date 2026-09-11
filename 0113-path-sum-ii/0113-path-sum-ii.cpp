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
    void check(vector<vector<int>>& ans, vector<int>& current, TreeNode* root, int target){
        if(root==nullptr){
            return;
        }
        int sum = 0;
        current.push_back(root->val);
        check(ans, current, root->left, target);
        check(ans, current, root->right, target);
        for(int i = 0; i<current.size(); i++){
            sum = sum + current[i];
        }
        if(sum == target && root->left == nullptr && root->right == nullptr){
            ans.push_back(current);
        }
        current.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> current;
        check(ans, current, root, targetSum);
        return ans;

    }
};