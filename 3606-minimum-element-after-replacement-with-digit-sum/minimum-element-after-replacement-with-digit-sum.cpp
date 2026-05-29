class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            string s = to_string(nums[i]);
            int j=0;
            int sum=0;
            while(j<s.size()){
                sum+=s[j]-'0';
                j++;
            }
            v.push_back(sum);
        }
        int minn = *min_element(v.begin(), v.end());
        return minn;
    }
};