class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        bool ans=false;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }else{
                if(st.empty()) return false;
                if(s[i]==')' && st.top()=='('){
                    ans=true;
                    st.pop();
                }else if(s[i]==']' && st.top()=='['){
                    ans=true;
                    st.pop();
                }else if(s[i]=='}' && st.top()=='{'){
                    ans=true;
                    st.pop();
                }else{
                    ans=false;
                    break;
                }
            }
        }
        if(!st.empty()) ans = false;
        return ans;
    }
};