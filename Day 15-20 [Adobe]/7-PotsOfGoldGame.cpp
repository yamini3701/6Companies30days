//#6Companies30Days Challenge Adobe-7 (Pots of Gold Game)

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int helper(vector<int>&v,int start,int end,vector<vector<int>>&dp)
    {
        if(start>end)
        {
            return dp[start][end]=0;
        }
        if(start==end)
        {
            return dp[start][end]=v[start];
        }
        if(dp[start][end]!=-1)
        {
            return dp[start][end];
        }
        int first=v[start]+min(helper(v,start+1,end-1,dp),helper(v,start+2,end,dp));
        int second=v[end]+min(helper(v,start+1,end-1,dp),helper(v,start,end-2,dp));
        return dp[start][end]=max(first,second);
    }
    
    int maxCoins(vector<int>&A,int n)
    {
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return helper(A,0,n-1,dp);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int>A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.maxCoins(A, N) << "\n";
    }
    return 0;
}
  // } Driver Code Ends
