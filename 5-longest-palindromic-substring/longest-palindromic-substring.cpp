class Solution {
public:
    int expend(string s,int l, int r){
        while(l>=0 && r<s.size() && s[l]==s[r]){
            l--;
            r++;
        }
        return r-l-1;
    }
    string longestPalindrome(string s) {
        int n = s.size();
        int start=0,end=0;
        for(int i=0;i<n;i++){
            int odd = expend(s,i,i);
            int even = expend(s,i,i+1);
            int len = max(odd,even);
            if(len>(end-start)){
                start=i-(len-1)/2;
                end = i+len/2;
            }
        }
        return s.substr(start,end-start+1);
    }
};