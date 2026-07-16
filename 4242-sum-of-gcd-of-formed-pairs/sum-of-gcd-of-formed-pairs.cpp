class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> v(nums.size());
        int maxx=0;
        for(int i=0;i<nums.size();i++){
            maxx = max(maxx , nums[i]);
            v[i] = gcd(maxx, nums[i]);
        }
        sort(v.begin(),v.end());
        long long sum = 0 ;
        int n =  v.size();
        for(int i=0;i<v.size()/2;i++){
            sum+=gcd(v[i],v[n-i-1]);
        }
        return sum;
    }
};