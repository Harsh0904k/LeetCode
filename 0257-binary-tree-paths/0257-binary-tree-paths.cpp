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
    void printTree(TreeNode* root, vector<int>& path, vector<string>& ans) {

        if (root == NULL) {
            return;
        }

        path.push_back(root->val);

        if (root->left == NULL && root->right == NULL) {

            string s = "";

            for (int i = 0; i < path.size(); i++) {
                s += to_string(path[i]);

                if (i != path.size() - 1) {
                    s += "->";
                }
            }

            ans.push_back(s);
        }

        printTree(root->left, path, ans);
        printTree(root->right, path, ans);

        path.pop_back();
    }

    vector<string> binaryTreePaths(TreeNode* root) {

        vector<int> path;
        vector<string> ans;

        printTree(root, path, ans);

        return ans;
    }
};