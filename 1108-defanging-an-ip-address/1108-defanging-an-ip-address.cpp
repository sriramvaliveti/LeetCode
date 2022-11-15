class Solution {
public:
    string defangIPaddr(string address) {
        string str = "";
        for (auto s:address){
            if (s == '.'){
                str+="[.]";
                    
            }
            else{
                str+=s;
            }
        }
        return str;
        
    }
};