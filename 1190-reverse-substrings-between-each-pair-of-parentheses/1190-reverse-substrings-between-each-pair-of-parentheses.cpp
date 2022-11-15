class Solution {
public:
    
    string reverseParentheses(string s) {
        vector <char> v;
        for (auto ch:s){
            string x="";
            if (ch ==')'){
                char temp = v.back();
                v.pop_back();
                while(temp!='('){
                   // cout<<temp<<" ";
                    x+=temp;
                    temp = v.back();
                    v.pop_back();
                }
                //cout<<x[0]<<x[1]<<x[2];
                for (auto abc:x){
                    v.push_back(abc);
                }
                
                //cout<<v[0]<<v[1]<<v[2];
                x.clear();
            }
            else{
                //cout<<ch<<" ";
                v.push_back(ch);
            }
           //cout<<v[1];
        }
        string ans = "";
        for(auto a:v){
            //cout<<a;
            ans+=a;
        }
        return ans;
    }
};