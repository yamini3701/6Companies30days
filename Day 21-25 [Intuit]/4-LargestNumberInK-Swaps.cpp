//#6Companies30Days Challenge Intuit-4 (Largest Number in K Swaps)

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    
    void helper(string &max, string str, int k, int idx){
        if(k==0){
            return;
        }
        
        int n=str.length();
        
        char maxc = str[idx];
        
        for(int i=idx+1 ; i<n ; i++){ //this loop simple checks if idx is the max
            if(maxc<str[i]){          //and if not we will swap maxc with str[i]
                maxc=str[i];
            }
        }
        
        if(maxc != str[idx]){  //we need to swap so decrease k by 1
            k--;
        }
        
        for(int i=idx ; i<n ; i++){
            if(str[i]==maxc){
                swap(str[idx], str[i]);
                if(str.compare(max)>0){
                    max = str;
                }
                helper(max, str, k, idx+1);
                swap(str[i],str[idx]);
            }
        }
    }
    
    //Function to find the largest number after k swaps.
    string findMaximumNum(string str, int k)
    {
       string max = str;
       helper(max, str, k, 0);
       return max;
    }
};

// { Driver Code Starts.

int main()
{
    int t, k;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> k >> str;
        Solution ob;
        cout<< ob.findMaximumNum(str, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends
