// problem link : https://leetcode.com/problems/even-odd-tree/submissions/1189930469/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        if (root == nullptr)
            return false;

        queue<TreeNode*> q;
        q.push(root);
        int level = -1;

        while (!q.empty()) {
            level++;
            int size = q.size();
            int prev = 0;

            for (int i = 0; i < size; i++) {
                TreeNode* curr = q.front();
                q.pop();

                if (level == 0 && curr->val % 2 == 0)
                    return false;

                if (i == 0) {
                    if ((level % 2 == 0 && curr->val % 2 == 1)
                    || (level % 2 == 1 && curr->val % 2 == 0)) {
                        prev = curr->val;
                    } else {
                        return false;
                    }
                } else {
                    if (level % 2 == 1) {
                        if (curr->val % 2 == 0 && prev > curr->val) {
                            prev = curr->val;
                        } else {
                            return false;
                        }
                    } else {
                        if (curr->val % 2 == 1 && prev < curr->val) {
                            prev = curr->val;
                        } else {
                            return false;
                        }
                    }
                }

                if (curr->left != nullptr)
                    q.push(curr->left);

                if (curr->right != nullptr)
                    q.push(curr->right);
            }
        }

        return true;
    }
};