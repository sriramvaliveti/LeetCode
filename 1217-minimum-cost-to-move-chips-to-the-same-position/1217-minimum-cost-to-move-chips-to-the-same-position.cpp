class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int ans1 = 0,ans2=0;
        int min = *min_element(position.begin(),position.end())-1;
        for (auto &x:position){
            x-=min;
            if(!(x&1)){
                ans2++;
            }
            else{
                ans1++;
            }
        }
        return std::min(ans2,ans1);
    }
};