class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int count=0;
        for(int i=0;i<intervals.size();i++){
            bool check = false;
            for(int j=0;j<intervals.size();j++){
                if(i==j) continue;
                if((intervals[i][0]>=intervals[j][0]) && (intervals[i][1]<=intervals[j][1])) {
                    check=true;
                    break;
                }
            }
            if(check) count++;
        }
        return intervals.size()-count;
    }
};