class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int a = 0,ans = 0;
        for (auto ch:allowed){
            a = a|(1<<(ch-'a'));
        }
        //cout<<a<<endl;
        for(auto str:words){
            int temp = 0;
            cout<<'\n'<<str<<endl;
            for (auto ch:str){
                temp = temp|(1<<(ch-'a'));
            }
            int i=0;
            bool flag = true;
            while(temp){
                if (temp&1){
                    //cout<<temp<<" "<<i<<" "<<(a>>i)<<" ";
                    flag = flag & ((a>>i)&1);
                    //cout<<flag<<endl;
                }
                temp = temp>>1;
                i+=1;
            }
            if (flag){
                ans++;
            }
        }
        return ans;
    }
};