class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        bool check=false;
        unordered_map<int,int> mp;
        vector<int> pre(nums.size(),0);
        pre[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            pre[i]=pre[i-1]+nums[i];
        }
        mp[0]=-1;
        for(int i=0;i<pre.size();i++){
            int rem = pre[i]%k;
            if(mp.count(rem)){
                if(i-mp[rem]>=2){
                    return true;
                }
            }else{
                mp[rem]=i;
            }
        }
        return false;
    }
};