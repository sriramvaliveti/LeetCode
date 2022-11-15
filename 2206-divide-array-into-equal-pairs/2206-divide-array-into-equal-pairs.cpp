class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;    
        }
        
        //count total pairs
        int totalPairs = 0;
        for(auto it: mpp){
            totalPairs += it.second/2;
        }
        
        return (totalPairs == n/2);
    }
};