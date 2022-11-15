class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin(),nums.end(),greater<int>());
        int total = accumulate(nums.begin(), nums.end(), 0);
        int ans = 0;
        for (int i=0;i<nums.size();i++){
            ans+=nums[i];
            if(2*ans>total){
                v.push_back(nums[i]);
                break;
            }
            else{
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};