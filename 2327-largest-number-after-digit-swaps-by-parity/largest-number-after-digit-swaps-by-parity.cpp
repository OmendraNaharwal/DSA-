class Solution {
public:
    int largestInteger(int num) {
        vector<int> v;
        while(num>0){
            v.push_back(num%10);
            num=num/10;
        }
        reverse(v.begin(),v.end());
        int n = v.size();
        for(int i=0;i<n;i++){
            int max_pos=i;
            for(int j=i+1;j<n;j++){
                if(v[j]>v[max_pos] && (v[j]-v[max_pos])%2==0){
                    max_pos = j;
                }
            }
            swap(v[i],v[max_pos]);
        }
        int res = 0;
        for(int i:v){
            res = res*10+i;
        }
        return res;
    }
};