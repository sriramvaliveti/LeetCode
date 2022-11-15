class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a=0,b=0;
        int x = s.length();
        int y = t.length();
        bool flag = false;
        while (a< x&& b<y){
            cout<<a<<" "<<b<<endl;
            if(s[a]==t[b]){
                a++;
                b++;
                flag = true;
            }
            else{
                b++;
                flag = false;
            }
        }
        cout<<a<<" "<<b<<endl;
        if (a==x&&b<=y&&flag||x==0){
            return true;
        }
        return false;
        
    }
};