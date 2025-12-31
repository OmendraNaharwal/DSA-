class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string x = strs[0];
        for (int i=1;i<strs.size();i++){
            string s = strs[i];
            for(int j=0; j<x.size() && j<s.size();j++){
                if(x[j]==s[j]){
                    continue;
                }else{
                    x.erase(j);
                    break;
                }
            }
            if (s.size()<x.size()){
                x.erase(s.size());
            }
        }
        return x;
    }
};