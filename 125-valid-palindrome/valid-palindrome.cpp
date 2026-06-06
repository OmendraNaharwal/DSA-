class Solution {
public:
    bool isPalindrome(string s) {
        string r;
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
                r += tolower(s[i]);
            }
        }
        int l =0; 
        int rg = r.size()-1;
        bool  check = true;
        while(l<rg){
            if(r[l]==r[rg]){
                check = true;
            }else{
                check =false;
                break;
            }
            l++;
            rg--;
        }
        return check;
    }
};