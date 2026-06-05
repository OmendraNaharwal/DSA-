class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l =0,m=numbers.size()-1;
        vector<int> v;
        while(l<m){
            int sum = numbers[l]+numbers[m];
            if(sum==target){
                v.push_back(l+1);
                v.push_back(m+1);
                l++;
                m--;
            }else if(sum<target){
                l++;
            }else{
                m--;
            }
        }
        return v;
    }
};