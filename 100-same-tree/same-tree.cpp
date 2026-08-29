class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // If both nodes are null, they are identical
        if (p == nullptr && q == nullptr) return true;
        
        // If one is null and the other isn't, or values differ
        if (p == nullptr || q == nullptr || p->val != q->val) return false;
        
        // Recursively check left and right subtrees
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};