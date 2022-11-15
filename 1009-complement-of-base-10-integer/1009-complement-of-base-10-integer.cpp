class Solution {
public:
    int bitwiseComplement(int num) {
        int ans=0,i=0;
        if (num==0){
            return 1;
        }
        while (num){
            if ((num&1)==0){
                ans+=1<<i;
            }
            i++;
            num>>=1;
        }
        return ans;
    }
};