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
    vector<vector<int>> res;
    void dfs(TreeNode* root){
        if(root==NULL) return;
        bool ltor=1;
        queue<TreeNode* > q;
        q.push(root);
        while(!q.empty()){
            int level = q.size();
            vector<int> temp(level);
            int first=0,last = level-1;
            while(level--){
                TreeNode* t = q.front();
                q.pop();
                if(ltor){
                    temp[first]=t->val;
                    first++;
                }else{
                    temp[last]=t->val;
                    last--;
                }
                if (t->left) q.push(t->left);
                if (t->right) q.push(t->right);
            }
            res.push_back(temp);
            ltor = !ltor;
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        dfs(root);
        return res;
    }
};