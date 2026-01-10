class Solution {
public:
    int m, n;
    int solve(int i, int j, string &s1, string &s2, vector<vector<int>> &dp){
        if(i>=m && j>=n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(i>=m){
            return dp[i][j] = s2[j]+solve(i, j+1, s1, s2, dp);
        }
        else if(j>=n){
            return dp[i][j] = s1[i]+solve(i+1, j, s1, s2, dp);
        }
        if(s1[i]==s2[j]) return dp[i][j] = solve(i+1, j+1, s1, s2, dp);
        int del_s1_i = s1[i]+solve(i+1, j, s1, s2, dp);
        int del_s2_j = s2[j]+solve(i, j+1, s1, s2, dp);

        return dp[i][j] = min(del_s1_i, del_s2_j);
    }
    int minimumDeleteSum(string s1, string s2) {
        m=s1.size();
        n=s2.size();
        vector<vector<int>> dp( m+1 ,vector<int>(n+1, -1));
        return solve(0, 0, s1, s2, dp);
    }
};