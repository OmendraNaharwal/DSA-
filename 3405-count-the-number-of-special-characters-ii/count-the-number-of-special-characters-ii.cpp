class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> small(26,-1);
        vector<int> cap(26,-1);
        for(int i=0;i<word.size();i++){
            if(word[i]>='a' && word[i]<='z'){
                small[word[i]-'a']=i;
            }
            else{
                if(cap[word[i]-'A']==-1){
                    cap[word[i]-'A']=i;
                }
            }
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(small[i]!=-1 && cap[i]!=-1 && small[i]<cap[i]){
                count++;
            }
        }
        return count;
    }
};