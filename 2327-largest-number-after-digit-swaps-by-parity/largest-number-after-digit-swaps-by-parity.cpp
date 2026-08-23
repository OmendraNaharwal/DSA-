class Solution {
public:
    int largestInteger(int num) {
        vector<int> v;
        while(num>0){
            v.push_back(num%10);
            num=num/10;
        }
        reverse(v.begin(),v.end());
        priority_queue<int> even;
        priority_queue<int> old;
        for(int i=0;i<v.size();i++){
            if(v[i]%2==0) even.push(v[i]);
            else old.push(v[i]);
        }
        int n = v.size();
        for(int i=0;i<n;i++){
            if(v[i]%2==0){
                v[i]=even.top();
                even.pop();
            }else{
                v[i]=old.top();
                old.pop();
            }
        }
        int res = 0;
        for(int i:v){
            res = res*10+i;
        }
        return res;
    }
};