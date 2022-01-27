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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Both are empty
        if (!p && !q) return true;
        
        // One is empty
        if (!p || !q) return fasle;
        
        // Both are not empty, compare the root value
        if (p-val != q->val) return false;
        
        // Compare left-subtree and right-subtree recyrsively
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
