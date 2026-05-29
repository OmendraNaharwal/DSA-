class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> rn;
        unordered_map<char,int> mg;
        int n = ransomNote.size();
        int m = magazine.size();
        if(n>m) return false;
        for(int i=0;i<n;i++){
            rn[ransomNote[i]]++;
        }
        for(int i=0;i<m;i++){
            mg[magazine[i]]++;
        }
        for(auto c:rn){
            if(mg[c.first]<c.second){
                return false;
            }
        }
        return true;
    }
};