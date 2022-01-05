//#6Companies30Days Challenge GoldmanSachs-9 (Number following a pattern)

// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string s){
         
        string str = "";
        int i=0,j=0;
        int count=1;
        while(i<=s.size()){
            if(s[i]=='I' || i==s.size()){
                while(count>=1){
                    if(count<=j) break;
                    char ch = count + '0';
                    str.push_back(ch);
                    count--;
                }
                j = i+1;
                count = i+1;
            }
            count++;
            i++;
        }
        return str;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends
