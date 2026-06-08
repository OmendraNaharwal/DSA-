class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int> ans;
        vector<pair<int,int>> vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(), [](auto &a, auto &b){
            if(a.second == b.second)
                return a.first > b.first;
            return a.second < b.second;
        });
        for(auto &p : vec){
            for(int i = 0; i < p.second; i++){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};