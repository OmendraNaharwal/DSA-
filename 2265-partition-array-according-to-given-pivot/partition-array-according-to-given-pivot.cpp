class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> p1;
        vector<int> p2;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                ans.push_back(nums[i]);
            }else if(nums[i]==pivot){
                p1.push_back(nums[i]);
            }else{
                p2.push_back(nums[i]);
            }
        }
        for(int i=0;i<p1.size();i++){
            ans.push_back(p1[i]);
        }
        for(int i=0;i<p2.size();i++){
            ans.push_back(p2[i]);
        }
        return ans;
    }
};