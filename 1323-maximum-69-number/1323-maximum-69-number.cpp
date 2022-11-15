class Solution {
public:
    int maximum69Number (int num) {
        int i = 1,temp=0;
        int n = num;
        while(n){
            if (n%10 == 6){
               temp = i;
            }
            i*=10;
            n/=10;
        }
        return num+3*temp;
    }
};