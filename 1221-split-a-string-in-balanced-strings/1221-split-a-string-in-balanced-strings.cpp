class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0;
        int temp = 0;
        for (char &c:s){
            if (c =='L'){
                temp+=1;
            }
            else{
                temp-=1;
            }
            if(temp==0){
                ans+=1;
            }
        }
       return ans;
    }
};