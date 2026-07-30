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
    int minD(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int left = minD(root->left);
        int right = minD(root->right);
        if(root->left == nullptr && root->right != nullptr){
            return right+1;
        }
         if(root->left != nullptr && root->right == nullptr){
            return left+1;
        }
     
         return min(left, right)+1;
    }
    int minDepth(TreeNode* root) {
        if (root == nullptr){
            return 0;
        }
        return minD(root);
    }
};