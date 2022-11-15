#include<stack>
using namespace std;
class Solution {
public:
    int maxDepth(string s) {
        stack<char> sta;
        int ans = 0;
        for(auto a:s){
            if (a=='('){
                sta.push(a);
                //cout<<sta.size()<<" "<<ans<<endl;
                int size = sta.size();
                if(size>ans){
                    ans = sta.size();
                }
            }
            else if(a==')'){
                sta.pop();
            }
        }
        return ans;
        
    }
};