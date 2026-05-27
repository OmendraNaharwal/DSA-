class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        bool check=false;
        vector<vector<int>> v;
        for(int i=0;i<intervals.size();i++){
            if(check==false && newInterval[0]<=intervals[i][0]){
                v.push_back(newInterval);
                check = true;
            }
            v.push_back(intervals[i]);
        }
        if(check==false){
            v.push_back(newInterval);
        }
        vector<vector<int>> res;
        int start1 = v[0][0];
        int end1 = v[0][1];
        for(int i=1;i<v.size();i++){
            int start2 = v[i][0];
            int end2 = v[i][1];
            if(end1>=start2){
                start1=start1;
                end1 = max(end1,end2);
                continue;
            }else{
                res.push_back({start1,end1});
                start1=start2;
                end1=end2;
            }
        }
        res.push_back({start1,end1});
        return res;
    }
};