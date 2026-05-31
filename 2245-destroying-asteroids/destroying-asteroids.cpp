class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        bool check=false;
        long long sum = mass;
        for(int i=0;i<asteroids.size();i++){
            if(sum>=asteroids[i]){
                sum+=asteroids[i];
                check=true;
            }else{
                check=false;
            }
        }
        return check;
    }
};