//#6Companies30Days Challenge GoldmanSachs-3 (SubArrayWithProductLessThan-K)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        if(n==1)
        {
            if(a[0]<k) 
                return 1;
            else 
                return 0;
        }
        
        long long p = 1;
        int start=0,end=0;
        long result = 0;
        while(end<n)
        {
            p*=a[end];
            
            while(p>=k and start<=end)
            {   
                p/=a[start];
                start++;
            }
            
            //Count the length of the window
            result+=(end-start+1);
            
            end++;
        }
        
        return (int)result;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends
