class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> s;
        int n = arr.size();
        vector<int> ans=arr;
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        for(int i=0;i<ans.size();i++){
            s[ans[i]]=i+1;
        }
        vector<int> a;
        for(int x : arr) {
            a.push_back(s[x]);
        }
        return a;
    }
};