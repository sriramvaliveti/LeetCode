class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0, prev = nums[0];
        int n = nums.size();
        if (n==1){
            return 0;
        }
        for (int i=1;i<n;i++){
        cout<<ans<<" "<<prev<<" "<<nums[i]<<" ";
        if (nums[i]<=prev){
            cout<<i<<endl;
            ans = ans+ prev-nums[i]+1;
            prev+=1;
        }
        else{
            prev = nums[i];
        }
        }
        return ans;
    }
};