class Solution {
public:
    bool hasAlternatingBits(int n) {
        int x = 0;
        int prev=n&1;
        n>>=1;
        while (n!=0){
            int curr = n&1;
            if (prev==curr){
                return false;
            }
            n>>=1;
            prev=curr;
        }
        
        return true;
    }
};