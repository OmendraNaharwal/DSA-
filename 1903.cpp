#include <algorithm>

class Solution {
public:
    string largestOddNumber(string num) {
        for(int i = num.size(); i >= 0; i-- ) {
            if((num[i] - '0') % 2 != 0) break;
            else num.erase(i, 1);
        }
        return num;
    }
};

class Solution {
public:
    string largestOddNumber(string num) {
        for (int i=num.size()-1;i>=0;i--){
            if((num[i]-'0')%2!=0) {
                return num.substr(0,i+1);
            }
        }
        return "";
    }
};


class Solution {
public:
    string largestOddNumber(string num) {
        reverse(num.begin(),num.end());
        for (int i=0;i<num.size();){
            if((num[i]-'0')%2!=0) break;
            else{
                num.erase(i,1);
            }
        }
        reverse(num.begin(),num.end());
        return num;
    }
};