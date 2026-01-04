class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        for(int l : nums){;
            int cnt=0;
            int dsum=0;
            for (int i = 1;i*i<=l;i++) {
                if (l % i == 0){
                    cnt++;
                    dsum += i;

                    if (i!=l / i) {
                        cnt++;
                        dsum += l/i;
                    }
                }
            }
            if(cnt==4){
                sum+=dsum;
            }
        }
        return sum;
    }
};