class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxsum=0;
        long long currsum=0;
        unordered_map<int,int> mp;
        for(int i=0;i<k;i++){
            currsum+=nums[i];
            mp[nums[i]]++;
        }
        if(mp.size()==k){
            maxsum = currsum;
        }
        for(int i=k;i<nums.size();i++){
            currsum+=nums[i];
            mp[nums[i]]++;

            currsum-=nums[i-k];
            mp[nums[i-k]]--;
            if(mp[nums[i-k]]==0){
                mp.erase(nums[i-k]);
            }
            if(mp.size()==k){
                maxsum = max(maxsum,currsum);
            }
        }
        return maxsum;
    }
};