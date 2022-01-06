//#6Companies30Days Challenge Amazon-6 (MaxOfAllSubArrays)

// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    
    vector <int> max_of_subarrays(int *nums, int n, int k)
    {
        int i, j, wins;
			wins = n - k + 1;                        // # of windows
			vector<int> lft(n), rgt(n);            // to store above explained lft and rgt

			for (i = 0; i < n; i++)
			{
				lft[i] = nums[i];
				 // If it start of block, then that element is max so far in the block
				 // Else lft[i] is max so far in the block
				if (i % k !=0) 
					lft[i] = max(lft[i - 1], lft[i]);
			}

			rgt[n - 1] = nums[n - 1];
			for (i = n - 2; i >= 0; i--)
			{
				rgt[i] = nums[i];
				// same as for left, but now traversing from right
				if (i % k != (k - 1))
					rgt[i] = max(rgt[i], rgt[i + 1]);
			}

			vector<int> ans;

			for (i = 0; i < wins; i++)
				ans.push_back(max(rgt[i], lft[i + k - 1]));

			return ans;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
