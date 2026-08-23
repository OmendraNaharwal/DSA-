class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        while(stones.size()>1){
            sort(stones.begin(),stones.end());
            int m = stones.back();
            stones.pop_back();
            int p = stones.back();
            stones.pop_back();
            if(m>p) stones.push_back(m-p);
        }
        if(stones.size()==0) return 0;
        else return stones[0];
    }
};