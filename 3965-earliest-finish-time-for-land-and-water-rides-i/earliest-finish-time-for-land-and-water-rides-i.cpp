class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,vector<int>& landDuration,vector<int>& waterStartTime, vector<int>& waterDuration){
        int ans = INT_MAX;
        for(int i=0;i<landStartTime.size();i++){
            int iland = landStartTime[i] + landDuration[i];
            for(int j=0;j<waterStartTime.size();j++){
                int finish = max(iland, waterStartTime[j]) + waterDuration[j];
                ans = min(ans, finish);
            }
        }
        for(int i=0;i<waterStartTime.size();i++){
            int iwater = waterStartTime[i] + waterDuration[i];
            for(int j=0;j<landStartTime.size();j++){
                int finish = max(iwater, landStartTime[j]) + landDuration[j];
                ans = min(ans, finish);
            }
        }
        return ans;
    }
};