class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count  = 0;
        for(int i=0;i<nums.size()&&count<nums.size();){
            cout<<nums[i]<<" ";
            if(nums[i]==0){
                nums.erase (nums.begin()+i);
                nums.push_back(0);
                count++;
            }
            else{
                i++;
                count++;
            }
        }
    }
};