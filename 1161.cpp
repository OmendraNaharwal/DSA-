class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> que;
        que.push(root);
        int maxsum = INT_MIN;
        int ans=0;
        int curr=1;
        while(!que.empty()){
            int n = que.size();
            int sum=0;
            while(n--){
                TreeNode* temp = que.front();
                que.pop();
                sum+=temp->val;
                if(temp->left) que.push(temp->left);
                if(temp->right) que.push(temp->right);
            }
            if(sum>maxsum){
                maxsum=sum;
                ans = curr;
            }
            curr++;
        }
        return ans;
    }
};