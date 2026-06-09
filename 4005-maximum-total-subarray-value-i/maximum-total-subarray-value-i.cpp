class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long minn = *min_element(nums.begin(),nums.end());
        long long maxx = *max_element(nums.begin(),nums.end());
        long long ans = (maxx-minn)*k;
        return ans;
    }
};