//#6Companies30Days Challenge Amazon-10 (Nuts and Bolts Problem)

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

void matchPairs(char nuts[], char bolts[], int n) {
    
    char arr[9]={'0','0','0','0','0','0','0','0','0'} ;
        for(int i=0;i<n;i++){
            
            if(nuts[i]=='!'){
                arr[0]='!';
            }
            else if(nuts[i]=='#'){
                arr[1]='#';
            }
            else if(nuts[i]=='$'){
                arr[2]='$';
            }
            else  if(nuts[i]=='%'){
                arr[3]='%';
            }
            else if(nuts[i]=='&'){
                arr[4]='&';
            }
            else if(nuts[i]=='*'){
                arr[5]='*';
            }
            else if(nuts[i]=='@'){
                arr[6]='@';
            }
            else if(nuts[i]=='^'){
                arr[7]='^';
            }
            else{
                arr[8]='~';
            }
        }
        
        int count=0;
        
        for(int i=0;i<9;i++){
            if(arr[i]!='0'){
                nuts[count]=arr[i];
                bolts[count]=arr[i];
                count++;
            }      
        }
    }

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(nuts, bolts, n);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
