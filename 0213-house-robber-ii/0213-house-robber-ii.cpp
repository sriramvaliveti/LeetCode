class Solution {
public:
    int foo(vector<int>& v){
        int n = v.size();
        vector<int> dp(n+1);
        dp[0] = v[0];
        dp[1] = max(v[0],v[1]);
        for(int i=2;i<n;i++){
            dp[i] = max(v[i]+dp[i-2],dp[i-1]);
        }
        return dp[n-1];
    }
    int rob(vector<int>& nums) {
        int n =nums.size();
        if (n==0){
            return 0;
        }
        else if(n==1){
            return nums[0];
        }
        else if (n==2){
            return max(nums[0],nums[1]);
        }
        else{
            vector<int> not_first={nums.begin()+1, nums.end()};
            vector<int> not_last={nums.begin(), nums.end()-1};

            return max(foo(not_first),foo(not_last));
        }
    }
};