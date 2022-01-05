//#6Companies30Days Challenge GoldmanSachs-6 (GCD of Strings)

class Solution {
    public:
    string gcdOfStrings(string str1, string str2) {
        
        if(str1 + str2 != str2 + str1)
            return "";
              
        if(str1.length() > str2.length())
            return gcdOfStrings(str2, str1);
        
        int length = gcd(str1.length(), str2.length());
        return str1.substr(0, length);
    }
    
    private:
    int gcd(int a, int b)
    {
        if(a == 0)
            return b;
        else
            return gcd(b % a, a);
    }        
};
