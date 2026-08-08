class Solution {
public:

    void check(TreeNode* root, int& Min, int& prev) {

        if (root == NULL) {
            return;
        }

        check(root->left, Min, prev);

        if (prev != -1) {
            Min = min(Min, root->val - prev);
        }

        prev = root->val;

        check(root->right, Min, prev);
    }

    int getMinimumDifference(TreeNode* root) {

        int min = INT_MAX;
        int prev = -1;

        check(root, min, prev);

        return min;
    }
};