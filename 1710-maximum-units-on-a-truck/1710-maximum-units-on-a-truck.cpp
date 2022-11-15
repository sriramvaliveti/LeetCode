class Solution {
public:
    int maximumUnits(vector<vector<int>>& v, int n) {
        sort(v.begin(),v.end(),[](auto &a, auto &b){
            return a[1]>b[1];
        });
        int temp = 0,ans = 0;
        for(auto &x:v){
            //cout<<x[0]<<" "<<x[1]<<" "<<ans<<" "<<temp<<endl;
            if (temp+x[0]<=n){
                temp+=x[0];
                ans+=(x[0]*x[1]);
            }
            else{
                ans+=((n-temp)*x[1]);
                break;
            }
        }
        return ans;
    }
};