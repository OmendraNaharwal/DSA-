class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int i=0;i<asteroids.size();i++){
            int c = asteroids[i];
            bool check=false;
            while(!st.empty() && st.top()>0 && c<0){
                if(abs(st.top())<abs(c)){
                    st.pop();
                }else if(abs(st.top())==abs(c)){
                    st.pop();
                    check=true;
                    break;
                }else{
                    check=true;
                    break;
                }
            }
            if(!check){
                st.push(c);
            }
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};