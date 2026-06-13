class Solution {
public:
    long long hour(vector<int>& a, int mid){
        long long an=0;
        for(int i=0;i<a.size();i++){
            an += (a[i] + mid - 1) / mid;
        }
        return an; 
    }
    int minEatingSpeed(vector<int>& nums, int h) {
        int low =1;
        int high = *max_element(nums.begin(), nums.end());
        int mid;
        int ans =high;
        while(low<=high){
            mid = low + (high-low)/2;
            if(hour(nums,mid)<=h){
                ans = mid;
                high = mid-1;
            }else{ 
                low=mid+1; 
            } 
        } 
        return ans; 
    }
};