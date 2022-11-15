class Solution {
public:
    int minimumSum(int n) {
        int a = n%10, b  = (n/10)%10, c = (n/100)%10, d = (n/1000)%10;
        
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(d);
        
        sort(v.begin(),v.end());
        
        return (v[0]+v[1])*10 +v[2]+v[3];
    }
};