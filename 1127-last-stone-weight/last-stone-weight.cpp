class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        int n = stones.size();
        for(int i=0;i<n;i++){
            pq.push(stones[i]);
        }
        while(pq.size()>1){
            int m = pq.top();
            pq.pop();
            int p = pq.top();
            pq.pop();
            if(m>p) pq.push(m-p);
        }
        if(pq.size()==0) return 0;
        else return pq.top();
    }
};