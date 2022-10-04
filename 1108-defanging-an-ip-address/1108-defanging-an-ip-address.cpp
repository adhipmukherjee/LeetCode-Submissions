class Solution {
public:
    string defangIPaddr(string address) {
        string str;
        for (auto c: address)
        if (c=='.')
            str=str+"[.]";
        else 
            str=str+c;
        return str;            
    }
};