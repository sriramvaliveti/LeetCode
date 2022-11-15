class Solution {
public:
    int minBitFlips(int start, int goal) {
        int res = start^goal;
        int ans = 0;
        while (res){
            res = res&(res-1);
            ans++;
        }
        return ans;
    }
};