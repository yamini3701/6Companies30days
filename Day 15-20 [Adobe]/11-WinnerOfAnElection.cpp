//#6Companies30Days Challenge Adobe-11 (Ammend the String)

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string amendSentence (string s)
    {
        string str = "";
        str += tolower(s[0]);
        int i = 1;
        while(s[i]!='\0'){
            if(isupper(s[i])){
                str += " ";
                str += tolower(s[i++]);
            }
            else
                str += s[i++];
        }
        return str;
    }
};

// { Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.amendSentence (s) << endl;
	}
}  // } Driver Code Ends
