class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int res=0;
        bool odd=false;
        for(auto c :mp){
            if(c.second%2==0){
                res+=c.second;
            }else{
                res+=c.second-1;
                odd=true;
            }
        }
        if(odd==true) res+=1;
        return res;
    }
};