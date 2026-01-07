class Solution {
public:
    long Sum = 0;
    long maxp = 0;
    int totalsum(TreeNode* root){
        if(root==NULL) return 0;
        int leftsubtree = totalsum(root->left);
        int rightsubtree = totalsum(root->right);
        long s1 = root->val + leftsubtree + rightsubtree;
        long s2 = Sum - s1;
        maxp = max(maxp , s1*s2);
        return s1;
    }

    int maxProduct(TreeNode* root) {
        if(root==NULL)return 0;
        maxp =0;
        Sum = totalsum(root);
        totalsum(root);
        return maxp%(1000000007);
    }
};