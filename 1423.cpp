class Solution {
public:
    int maxScore(vector<int>& num, int k) {
        int lsum=0 ,rsum=0, maxsum =0;
        for (int i=0;i<k;i++){
            lsum+=num[i];
        }
        maxsum = lsum;
        int rindex = num.size()-1;
        for(int i=k-1;i>=0;i--){
            lsum = lsum - num[i];
            rsum = rsum + num[rindex];
            rindex--;
            maxsum = max(maxsum , lsum+rsum);
        }
        return maxsum;
    }
};