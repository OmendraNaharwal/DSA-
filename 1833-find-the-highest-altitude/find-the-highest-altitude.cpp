class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> pref(gain.size()+1);
        pref[0]=0;
        for(int i=1;i<=gain.size();i++){
            pref[i]=pref[i-1]+gain[i-1];
        }
        return *max_element(pref.begin(),pref.end());
    }
};